#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 540028440
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned long p_5, float p_13[2][5][2],
          long p_15[5][1], unsigned long p_17)
{
  char v_19;
  long long v_11;
  unsigned short v_9;
  unsigned int v_7;
  unsigned long long v;
  float result;
  v_19 = (char)59;
  v_11 = 64048LL;
  v_9 = (unsigned short)p;
  v_7 = 4294916133U;
  v = 18446744072816850979ULL;
  if ((p / (unsigned long long)(p_5 + 374UL)) * (p + v) - (unsigned long long)(
      (long long)(- p_17) / -101749031LL) <= (unsigned long long)(! (
                                             p_17 & p_5)) - (unsigned long long)-3435701891.45 % (
                                                            ((unsigned long long)p_13[0][0][0] & p) + 650ULL)) {
    v = (unsigned long long)(- v_19);
    v_9 = (unsigned short)(! ((5025828864ULL + v) - ! p));
    result = (float)(! v_11 % 992LL + (long long)p_5);
  }
  else {
    result = (float)(- p_15[4][0]);
    v_7 = (unsigned int)(((unsigned long)(p_15[3][0] * -19531L) + ! p_5) / (unsigned long)(
                         v_7 + 538U));
    v_11 = (long long)(- ((unsigned long long)3.42473398304e+36f / 18446744073709511954ULL - - p));
  }
  while (- p < (! v + (unsigned long long)((unsigned long)result - p_5)) % (unsigned long long)(
               ! (4294927456U + v_7) + 716U)) {
    result = (int)v_9 * -26875;
    v = (unsigned long long)((long long)((unsigned long)p_15[2][0] * p_17) | v_11) | (
        (unsigned long long)p_17 * p - (unsigned long long)(p_5 << 9UL));
    v_9 = (unsigned short)p_13[0][1][0];
    v_7 = 8875U;
  }
  while_0_break: ;
  return result;
}


