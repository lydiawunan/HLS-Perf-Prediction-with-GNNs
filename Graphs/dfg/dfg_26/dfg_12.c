#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 317972816
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, char p_5, double p_11[5], unsigned char p_15[3][4][5],
        float p_17)
{
  signed char v_13;
  unsigned char v_9;
  unsigned short v_7;
  signed char v;
  int result;
  v_13 = (signed char)p;
  v_9 = (unsigned char)99;
  result = (int)(((double)(23293LL / (long long)((int)p_15[0][3][0] + 314)) * p_11[0] + (double)(
                  (long long)p_11[4] % (p + 703LL) - ~ p)) * (double)p_17);
  v = (signed char)(~ (5839U - (unsigned int)result));
  v_7 = (unsigned short)((double)((long long)v_9 % (- p + 76LL)) + - (
                         p_11[2] / 2447. + (double)(! v_13)));
  result = (int)(((unsigned long long)((long long)v * p + (long long)(~ p_5)) / (
                  (7747ULL * (unsigned long long)v_7) * 14237ULL + 638ULL)) / (unsigned long long)(
                 (int)(! (! (! v_7))) + 846));
  return result;
}


