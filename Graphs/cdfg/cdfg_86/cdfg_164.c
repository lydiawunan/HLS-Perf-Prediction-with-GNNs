#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 792224853
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned char p_4[1][3], unsigned int p_6,
                 unsigned char p_11, float p_13)
{
  unsigned char v_17;
  unsigned char v_15;
  unsigned int v_9;
  float v;
  unsigned int result;
  v_17 = (unsigned char)p_13;
  v = (float)p_6;
  if ((int)p_13 < (int)v_17 % 63313 + 10) {
    v_15 = (unsigned char)v;
    v = (float)((int)p_11 * (int)v_15);
    result = (unsigned int)(- p);
  }
  else {
    v = (float)((3235034758U * p_6 + 4294947113U) * (unsigned int)p_11);
    v_15 = (unsigned char)(- (~ p_6) / ((unsigned int)(p_13 * 0.f) + 787U));
    result = (unsigned int)(! ((int)(- v_15) / ((int)p_4[0][2] / 17770 + 26)));
  }
  while (p <= (double)(((unsigned int)(p + (double)p_4[0][1]) - ! result) % (
                       p_6 + 600U))) {
    result = v * 13779.f;
    v = (float)(~ (- result / (unsigned int)((int)((unsigned char)p) % 53 + 483)));
    v_9 = (unsigned int)((float)((int)p_11 + -37) * (p_13 + (float)p_6)) - 
          (unsigned int)(3662266010. * p) / ((38657U - p_6) + 574U);
    result = ! ((4294967278U - v_9) * 36003U);
  }
  while_0_break: ;
  return result;
}


