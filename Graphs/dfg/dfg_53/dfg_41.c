#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 281767354
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, unsigned short p_4[5], long long p_7, long long p_9,
              double p_11[2][2][3])
{
  float v_17;
  unsigned char v_15;
  double v_13;
  short v;
  long long result;
  v_17 = (float)p_9;
  v_15 = (unsigned char)118;
  v_13 = (double)((int)((unsigned short)((float)(260195481LL / (((long long)v_15 + p_9) + 846LL)) * (
                                         v_17 + 3787095552.f))) - (int)(- p_4[0]));
  v_13 = - (8726430891.22 * v_13);
  v = (short)(((p_9 / (long long)((int)p + 361)) / (long long)(((int)((char)(
                                                                p_11[1][1][0] - (double)p)) + -21) + 101)) % (
              (long long)((double)((p_7 & p_9) | (long long)((int)((unsigned char)v_13) / 105)) - 
                          (p_11[0][0][0] - 3.12609351494e+38) * - p_11[1][0][2]) + 921LL));
  result = (long long)p - ((long long)(~ ((int)p_4[0] % ((int)v + 794))) - p_7);
  return result;
}


