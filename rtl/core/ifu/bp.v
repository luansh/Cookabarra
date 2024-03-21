//https://zhuanlan.zhihu.com/p/648594488
  `include "defines.v"

  module branch_prediction #(
    parameter RAS_ENTRIES = 8,
    parameter BTB_ENTRIES = 64,
    parameter BHT_ENTRIES = 64) (
    input ck_i,
    input rs_n_i,
    // input signals from execution unit
  //EX -> BP
    input[`INS_BUS_A] branch_source_i,   // the pc caused the branch
    input branch_request_i,
    input branch_is_taken_i,
    input branch_is_call_i,
    input branch_is_ret_i,
    input branch_is_jmp_i,
    input[`INS_BUS_A] branch_target_i,   // the branch target pc
    input branch_mispredict_i,

    //input signals from fetch unit
    input[`INS_BUS_A] pc_i,  // the current PC from fetch unit

    //input signals from ctl
    input stall_i, // to avoid one ret/call instruction to cause multiple ras push or pop operation

    // output signals to fetch unit
    output reg[`INS_BUS_A] next_pc_o,  // next pc predicted by this module
    // next pc is a branch take or not, forward to execute via fetch module
    output reg next_taken_o);

    localparam BHT_ENTRIES_WIDTH = $clog2(BHT_ENTRIES);
    localparam BTB_ENTRIES_WIDTH = $clog2(BTB_ENTRIES);
    localparam RAS_ENTRIES_WIDTH = $clog2(RAS_ENTRIES);

  //BHT:Branch History Table
  //BIM:BI-Model
  //RAS:Return Address Stack

  //数组bht_bim_list_r的元素是 BIM(2b)，数组长度为 BHT_ENTRIES
    reg[1:0] bht_bim_list_r[(BHT_ENTRIES-1):0];
    // ------update the bht, indexed by the bits[2+BHT_ENTRIES_WIDTH-1:2] --------
  //分支指令地址的（作为BIM 在BHT 上索引的）部分位组
  //bht_bim_list_r[bht_write_entry_w] 即需要更新的 BIM
    wire[BHT_ENTRIES_WIDTH-1:0] bht_write_entry_w = branch_source_i[(BHT_ENTRIES_WIDTH+2-1):2];

    integer bims;
    //BHT 为由BIM 构成的List
    always @ (posedge ck_i or negedge  rs_n_i)
      if (rs_n_i == `RST_EN)
      //2'b00:Strongly Not Taken
      //2'b01:Weakly Not Taken
      //2'b10:Weakly Taken
      //2'b11:Strongly Taken
        for (bims = 0; bims < BHT_ENTRIES; bims = bims + 1) bht_bim_list_r[bims] <= 2'b11;
      else if (branch_request_i)//发生分支请求
      //发生转移，BIM 值未上饱和
        if (branch_is_taken_i && (bht_bim_list_r[bht_write_entry_w] < 2'd3)) bht_bim_list_r[bht_write_entry_w] <= bht_bim_list_r[bht_write_entry_w] + 2'd1;
      //未发生转移，BIM 值未下饱和
        else if ((~branch_is_taken_i) && (bht_bim_list_r[bht_write_entry_w] > 2'd0)) bht_bim_list_r[bht_write_entry_w] <= bht_bim_list_r[bht_write_entry_w] - 2'd1;

    // ------lookup the bht, indexed by the bits[2+BHT_ENTRIES_WIDTH-1:2] --------
  //RISC-V32的指令地址是4B对齐的，低2b为 0
    wire[BHT_ENTRIES_WIDTH-1:0] bht_read_entry_w = pc_i[(BHT_ENTRIES_WIDTH+2-1):2];
  //BIM=2/3/时，需要（弱或者强）跳转状态，预测跳转
    wire bht_predict_taken_w = (bht_bim_list_r[bht_read_entry_w] >= 2'd2);

    /*
    struct BTB {
      valid: bool,
      is_call: bool,
      is_ret: bool,
      is_jmp: bool,
      source_pc: uint32_t,//当前PC
      target_pc: uint32_t,//跳转目的PC
    }
    */
    //  (1) if the entry is a "call" or a "jmp",  select the target_pc as the next_pc
    //  (2) if the entry is a "ret",  select the RAS as the next_pc
    //  (3) otherwise, resort to the BHT(BIM) to select target_pc or pc_i+4 as the next_pc
    reg btb_is_valid_list_r[BTB_ENTRIES-1:0];
    reg btb_is_call_list_r[(BTB_ENTRIES-1):0] = {(BTB_ENTRIES){1'b0}};
    reg btb_is_ret_list_r[BTB_ENTRIES-1:0];
    reg btb_is_jmp_list_r[BTB_ENTRIES-1:0];
    reg [`INS_BUS_A] btb_source_pc_list_r[BTB_ENTRIES-1:0];
    reg [`INS_BUS_A] btb_target_pc_list_r[BTB_ENTRIES-1:0];
  //基于PC，查找（预测） BTB
    reg btb_is_matched_r = 1'b0;
    reg btb_is_call_r = 1'b0;
    reg btb_is_jmp_r = 1'b0;
    reg btb_is_ret_r = 1'b0;
    reg [`INS_BUS_A] btb_target_pc_r = {(`INS_BUS_A){1'b0}};

    reg[(BTB_ENTRIES_WIDTH-1):0] btb_rd_entry_r = {(BTB_ENTRIES_WIDTH){1'b0}};

    integer query;
    always @ (*)
    begin
      btb_is_matched_r = 1'b0;
      btb_is_call_r = 1'b0;
      btb_is_ret_r = 1'b0;
      btb_is_jmp_r = 1'b0;
      btb_target_pc_r = pc_i + 32'd4; //未发生任何形式的跳转，则使用指令顺序地址(pc+4)
      btb_rd_entry_r = {BTB_ENTRIES_WIDTH{1'b0}};  //not matched
      for (query = 0; query < BTB_ENTRIES; query = query + 1)
    //BTB 列表中包括一有效项，其源PC与当前输入的PC相同
      if (btb_source_pc_list_r[query] == pc_i && btb_is_valid_list_r[query])
      begin
        btb_is_matched_r = 1'b1;
        {btb_is_call_r, btb_is_ret_r, btb_is_jmp_r, btb_target_pc_r} = {btb_is_call_list_r[query], btb_is_ret_list_r[query], btb_is_jmp_list_r[query], btb_target_pc_list_r[query]};
        /* verilator lint_off WIDTH */
        btb_rd_entry_r = query; //查询（读）匹配项的序号
        /* verilator lint_on WIDTH */
      end
    end

    // further check ras matched or not, if yes, get the next pc from the RAS
    wire ras_call_matched_w = (btb_is_matched_r & btb_is_call_r);
    wire ras_ret_matched_w  = (btb_is_matched_r & btb_is_ret_r);

    //更新 BTB
    // the btb entry to be updated
    reg[BTB_ENTRIES_WIDTH-1:0] btb_write_entry_r;
    // allocate a new entry to store the branch target
    wire[BTB_ENTRIES_WIDTH-1:0] btb_alloc_entry_w;

    reg btb_hit_r;
    reg btb_alloc_req;
    integer i1;

    always @ (*)
    begin
      btb_write_entry_r = {BTB_ENTRIES_WIDTH{1'b0}};
      btb_hit_r = 1'b0;
      btb_alloc_req  = 1'b0;

      // Misprediction - learn / update branch details
    //发生分支，并且分支转移
      if (branch_request_i && branch_is_taken_i)
      begin
      for (i1 = 0; i1 < BTB_ENTRIES; i1 = i1 + 1)
      //BTB 列表中包括一有效项，其PC与当前分支操作的PC相同
        if (btb_source_pc_list_r[i1] == branch_source_i && btb_is_valid_list_r[i1])
        begin
        btb_hit_r = 1'b1;
        /* verilator lint_off WIDTH */
        btb_write_entry_r = i1;
        /* verilator lint_on WIDTH */
        end
      btb_alloc_req = ~btb_hit_r; //若无匹配项，则分配一个 BTB
      end
    end

    integer update;
    always @ (posedge ck_i or negedge rs_n_i)
      if (rs_n_i == `RST_EN)
        for (update = 0; update < BTB_ENTRIES; update = update + 1)
        begin
          btb_is_valid_list_r[update] <= 1'b0;
          btb_is_call_list_r[update] <= 1'b0;
          btb_is_ret_list_r[update] <= 1'b0;
          btb_is_jmp_list_r[update] <= 1'b0;
          btb_source_pc_list_r[update] <= 32'd0;
          btb_target_pc_list_r[update] <= 32'd0;
        end
      else
      if (branch_request_i && branch_is_taken_i)
        if (btb_hit_r)//更新命中 BTB的各字段值
        begin
          btb_is_call_list_r[btb_write_entry_r] <= branch_is_call_i;
          btb_is_ret_list_r[btb_write_entry_r] <= branch_is_ret_i;
          btb_is_jmp_list_r[btb_write_entry_r] <= branch_is_jmp_i;
          btb_source_pc_list_r[btb_write_entry_r] <= branch_source_i;
          btb_target_pc_list_r[btb_write_entry_r] <= branch_target_i;
        end
        else//分配 BTB
        begin
          btb_is_valid_list_r[btb_alloc_entry_w] <= 1'b1;
          btb_is_call_list_r[btb_alloc_entry_w]<= branch_is_call_i;
          btb_is_ret_list_r[btb_alloc_entry_w] <= branch_is_ret_i;
          btb_is_jmp_list_r[btb_alloc_entry_w] <= branch_is_jmp_i;
          btb_source_pc_list_r[btb_alloc_entry_w] <= branch_source_i;
          btb_target_pc_list_r[btb_alloc_entry_w] <= branch_target_i;
        end

    //-----------------------------------------------------------------
    // 
    // four scenarios:
    //Call间接地址（其值存放于寄存器）
    //  (1) call predicted failed, ret predicted failed as well
    //    exu updates the ras queue(push the call index and pop the ret index)
    //Call直接地址
    //  (2) call predicted succeed, but ret predicted failed
    //    bp itself pushes the call index, but the exu pops the ret index
    //  (3) call predicted failed, but ret predicted succeed
    //    exu pushes the call index, but bp itself pops the ret index
    //  (4) call predicted succeed, ret predicted succeed as well
    //    bp itself updates the ras queue(push the call index and pop the ret index)
    //-----------------------------------------------------------------
  //数组的长度为 RAS_ENTRIES，保存的数据为PC (32b)
  //数组以堆栈(FILO)的形式，提供存取方式
    reg[31:0] ras_list_r[RAS_ENTRIES-1:0];

    //--------------------------------------------------------------------------------
    // the authenticated Return Address Stack which is updated according to the exu
    //--------------------------------------------------------------------------------
  //正确的 RAS
    reg[(RAS_ENTRIES_WIDTH-1):0] ras_proven_current_index_r = {(RAS_ENTRIES_WIDTH){1'b0}};
    reg[(RAS_ENTRIES_WIDTH-1):0] ras_proven_next_index_r = {(RAS_ENTRIES_WIDTH){1'b0}};
  //复位时current 为 0
    always @ (*)
    begin
      ras_proven_next_index_r = ras_proven_current_index_r;
    //Call入栈(+1)，Ret 出栈(-1)
      if (branch_request_i & branch_is_call_i) ras_proven_next_index_r = ras_proven_current_index_r + 1;
      else if (branch_request_i & branch_is_ret_i) ras_proven_next_index_r = ras_proven_current_index_r - 1;
    end

    always @ (posedge ck_i)
      ras_proven_current_index_r <= (rs_n_i == `RST_EN) ? {RAS_ENTRIES_WIDTH{1'b0}} : ras_proven_next_index_r;

    //-----------------------------------------------------------------
    // the speculative Return Address Stack
    //-----------------------------------------------------------------
  //预测的 RAS
    reg[RAS_ENTRIES_WIDTH-1:0] ras_speculative_current_index_r = {RAS_ENTRIES_WIDTH{1'b0}};
    reg[RAS_ENTRIES_WIDTH-1:0] ras_speculative_next_index_r = {RAS_ENTRIES_WIDTH{1'b0}};;

    // the predicted pc based on the ras
  //读取 RAS栈顶的数据值，作为预测的PC
    wire [31:0] ras_predict_pc_w = ras_list_r[ras_speculative_current_index_r];

    always @ (*)
      ras_speculative_next_index_r = ras_speculative_current_index_r;
      // Mispredict - sync with authentical ras index
    //Call指令预测错误
      if (branch_mispredict_i & branch_request_i & branch_is_call_i) ras_speculative_next_index_r = ras_proven_current_index_r + 'd1;
    //Ret 指令预测错误
      else if (branch_mispredict_i & branch_request_i & branch_is_ret_i) ras_speculative_next_index_r = ras_proven_current_index_r - 'd1;
      else if (ras_call_matched_w && stall_i == 1'b0) ras_speculative_next_index_r = ras_speculative_current_index_r + 'd1;
      else if (ras_ret_matched_w && stall_i == 1'b0) ras_speculative_next_index_r = ras_speculative_current_index_r - 'd1;

    integer i3;
    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN)
      begin
        for (i3 = 0; i3 < RAS_ENTRIES; i3 = i3 + 1) ras_list_r[i3] <= 32'd0;
        ras_speculative_current_index_r <= {RAS_ENTRIES_WIDTH{1'b0}};
      end
      else
      //
        if (branch_mispredict_i & branch_request_i & branch_is_call_i)
        begin
          ras_list_r[ras_speculative_next_index_r] <= branch_source_i + 4;
          ras_speculative_current_index_r <= ras_speculative_next_index_r;
          // $display("ras: exu push, curr_index=%d, target_pc=%h", ras_speculative_next_index_r, branch_source_i + 4);
        end
        else if (ras_call_matched_w && stall_i == 1'b0)
        begin
        //call调用的过程执行完毕后，其返回地址（调用地址+4）入栈 RAS
          ras_list_r[ras_speculative_next_index_r] <= pc_i + 4;
          ras_speculative_current_index_r <= ras_speculative_next_index_r;
          // $display("ras: bpu push, curr_index=%d, target_pc=%h", ras_speculative_next_index_r, pc_i + 4);
        end
        else if (branch_mispredict_i & branch_request_i & branch_is_ret_i) ras_speculative_current_index_r <= ras_speculative_next_index_r;
        else if (ras_ret_matched_w && stall_i == 1'b0) ras_speculative_current_index_r <= ras_speculative_next_index_r;

    //-----------------------------------------------------------------
    // Replacement Selection
    //-----------------------------------------------------------------
    bp_allocate_entry #(
      .DEPTH(BTB_ENTRIES)) u_lru(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),
      .alloc_i(btb_alloc_req),
      .alloc_entry_o(btb_alloc_entry_w));
    // Outputs

    // the next_pc predicted as below:
  //ret 指令，使用RAS 栈中保存的、其对应call指令的下一个地址
  //预测发生跳转，或者call/jump/指令时，使用预测地址，反之直接使用下一个PC地址
    assign next_pc_o = ras_ret_matched_w ? ras_predict_pc_w : (btb_is_matched_r & (bht_predict_taken_w | btb_is_jmp_r | btb_is_call_r)) ? btb_target_pc_r : pc_i + 4;
    // taken or not_taken was predicted as below:
    //存在 BTB项，
  //call/jump/ret 指令或者预测跳转时，指示其它模块“发生跳转”
    assign next_taken_o = (btb_is_matched_r & (btb_is_call_r | btb_is_ret_r | bht_predict_taken_w | btb_is_jmp_r)) ? 1'b1 : 1'b0;

  endmodule

//产生0-31循环数据
  module bp_allocate_entry #(
    parameter DEPTH = 32) (
    input ck_i,
    input rs_n_i,
    input alloc_i,
    output[$clog2(DEPTH)-1:0] alloc_entry_o);

    localparam A_W = $clog2(DEPTH);

    reg [A_W-1:0] lfsr_r;

    always @ (posedge ck_i or negedge  rs_n_i)
      if (rs_n_i == `RST_EN) lfsr_r <= {A_W{1'b0}};
      else if (alloc_i)
      if (lfsr_r == {A_W{1'b1}}) lfsr_r <= {A_W{1'b0}};
      else lfsr_r <= lfsr_r + 1;

    assign alloc_entry_o = lfsr_r[A_W-1:0];

  endmodule