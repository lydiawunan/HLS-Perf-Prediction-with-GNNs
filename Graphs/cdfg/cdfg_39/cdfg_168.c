#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 38071102
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p[3][1], unsigned char p_11, int p_13[1][1][2])
{
  unsigned short v_9;
  float v_7;
  long v_5;
  short v;
  int result;
  v_9 = (unsigned short)p[2][0];
  v_7 = (float)p_11;
  v_5 = (long)p_11;
  v = (short)p[2][0];
  result = -452226714;
  while ((unsigned long long)(((int)(~ v) << 5) + p[1][0]) >= 18446744072640119674ULL) {
    v_7 = (float)v_9 + (v_7 - (float)(v_5 * 21478L));
    result = (int)((float)(! (p[0][0] & 612730688)) - - ((float)p_13[0][0][1] / 486.886474609f));
    v_9 = (unsigned short)p_11;
    v = (short)v_9;
  }
  while_0_break: ;
  result = ~ (29834 % (- result + 557));
  return result;
}


