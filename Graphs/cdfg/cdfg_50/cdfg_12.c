#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299004061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, long long p_5[2][4][5], short p_11[5][1],
                  unsigned long p_17, long p_19[2][3])
{
  int v_21;
  unsigned long long v_15;
  float v_13;
  short v_9;
  char v_7;
  short v;
  unsigned long result;
  v_21 = -850786516;
  v_15 = 18446744073709528087ULL;
  v_7 = (char)p_11[4][0];
  v = (short)-21850;
  result = p_17;
  if (! ((p_5[1][2][4] - 138LL) + (long long)p_19[1][2]) < (long long)(
                                                           ~ result >> (
                                                           - v_21 & 31)) % (
                                                           (((long long)p_19[0][2] + p_5[0][2][1]) ^ 0LL) + 179LL)) {
    v_9 = (short)(~ 592298666L);
    v_9 = (short)(0.f / ((float)((int)v_7 + (int)v_9) * - p + 242.f));
    result = p_17;
  }
  else {
    v_9 = (short)(- -25143);
    v_15 = (unsigned long long)((int)(- (! p_11[0][0])) >> (- p_17 % (unsigned long)(
                                                            ((unsigned int)p_11[0][0] - 724588558U) + 1U) & 15UL));
    result = ! (~ p_17 >> ((int)(- v_7) & 31));
  }
  while ((long long)(! ((int)((short)p) - (int)v)) * ~ (! p_5[0][0][2]) == 0LL) {
    result = (int)v_9 - (int)v_7 / -47941;
    v_13 = (float)12499ULL;
    v_7 = (char)((v_15 ^ (unsigned long long)p_17 * v_15) - (unsigned long long)-2731246592.f);
    v = (short)((float)(94 + (100 & (int)p_11[0][0])) + - (- v_13));
  }
  while_0_break: ;
  return result;
}


