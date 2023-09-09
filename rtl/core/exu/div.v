//https://blog.csdn.net/dxz44444/article/details/107163447
  `include "defines.v"

  module div(
    input wire clk_i,
    input wire n_rst_i,
  //From EX
    input wire div_signed_i,
    input wire[31:0] dividend_i,
    input wire[31:0] divisor_i,
    input wire annul_i, //AnNul:在除法运算过程中，异常或者中断发生，停止除法运算
    input wire start_i,
  //To EX
    output reg ready_o,
    output reg[63:0] result_o); //低32b 为商，高32b为余数

    wire[32:0] div_var_w;
    reg[5:0] cnt_r;

    reg[1:0] state_r;
    reg[64:0] dividend_r; //被除数
    reg[31:0] divisor_r;//除数
  //比较被除数与除数
  //如果被除数大于除数，div_var_w[32] 为 0
    assign div_var_w = {1'b0, dividend_r[63:32]} - {1'b0, divisor_r};

    always @ (posedge clk_i)
      if (n_rst_i == `RST_EN) begin
          state_r <= `DIV_FREE;
          ready_o <= `DIV_RESULT_NOT_READY;
          result_o <= {`ZERO_WORD, `ZERO_WORD};
      end
      else
        case (state_r)
          `DIV_FREE:
          begin
            if (start_i == `DIV_START && annul_i == 1'b0)
            begin
              if (divisor_i == `ZERO_WORD) state_r <= `DIV_BY_ZERO;
              else
              begin
                state_r <= `DIV_ON;
                cnt_r <= 6'd0;
                dividend_r <= {1'b0, `ZERO_WORD, `ZERO_WORD};
                dividend_r[32:1] <= (div_signed_i && dividend_i[31]) ? (~dividend_i) + 1 : dividend_i;
                divisor_r <= (div_signed_i && divisor_i[31]) ? (~divisor_i) + 1 : divisor_i;
              end
            end
            else {ready_o, result_o} <= {`DIV_RESULT_NOT_READY, {`ZERO_WORD,`ZERO_WORD}};
          end
          `DIV_BY_ZERO:
          begin //更新 CRS？
            state_r <= `DIV_END;
            dividend_r <= {dividend_i, 1'b0, 32'hFFFFFFFF};
          end
          `DIV_ON:
          begin
            if (~annul_i)
            begin
              if (cnt_r != 6'd32)
              begin
                cnt_r <= cnt_r + 1;
              //div_var_w[32] 为 0，被除数大于除数，二者相减（即 div_var_w[31:0]）再+1
              //div_var_w[32] 为 1，被除数小于除数，继续左移被除数
                dividend_r <= div_var_w[32] ? {dividend_r[63:0] , 1'b0} : {div_var_w[31:0] , dividend_r[31:0] , 1'b1};
              end
              else
              begin
                state_r <= `DIV_END;
                cnt_r <= 6'd0;
                if (div_signed_i && (dividend_i[31] ^ divisor_i[31])) dividend_r[31:0] <= (~dividend_r[31:0]) + 32'd1;
                if (div_signed_i && (dividend_i[31] ^ dividend_r[64])) dividend_r[64:33] <= (~dividend_r[64:33] + 32'd1);
              end
            end
            else state_r <= `DIV_FREE;
          end
          `DIV_END:
          begin
            if (start_i == `DIV_STOP)
            begin
              state_r <= `DIV_FREE;
              {ready_o, result_o} <= {`DIV_RESULT_NOT_READY, {`ZERO_WORD,`ZERO_WORD}};
            end
            else {ready_o, result_o} <= {`DIV_RESULT_READY, {dividend_r[64:33], dividend_r[31:0]}};
          end
        endcase

  endmodule
