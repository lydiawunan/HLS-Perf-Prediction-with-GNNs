#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065222374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned char p_5, unsigned int p_7[1][2][4],
          unsigned short p_9, long long p_13)
{
  float v_17;
  int v_15;
  int v_11;
  signed char v;
  short result;
  v_17 = -6312459264.f;
  result = (short)p_9;
  v_15 = (((int)p + (int)((unsigned short)p) / ((int)p_9 + 68)) / ((int)v_17 + 290)) % (
         (int)p + 956);
  v_11 = v_15;
  v = (signed char)((long long)result / ((long long)((int)(- p_9) + v_11) % (
                                         ((long long)(- p) & p_13) + 122LL) + 890LL));
  result = (short)(- ((unsigned int)((int)v % (((int)((unsigned char)p) - (int)p_5) + 546)) - (
                      ~ p_7[0][1][1] + 233U)));
  return result;
}


