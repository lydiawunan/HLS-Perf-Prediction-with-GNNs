#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 455277577
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[3], unsigned long long p_4[3][4][1], short p_11,
              unsigned char p_15[4][1])
{
  int v_17;
  int v_13;
  unsigned long long v_9;
  int v_7;
  long v;
  long long result;
  v_17 = (int)p_11;
  v_13 = p[0];
  v_9 = p_4[0][3][0];
  v = 707408405L;
  result = 392706284LL;
  v = (long)(- ((973031219ULL + (unsigned long long)v) & p_4[2][1][0] / 3615ULL));
  if ((4294964200U + (unsigned int)(88 >> 7LL)) / (unsigned int)(~ (v_17 - (int)p_11) + 784) < (unsigned int)(- p_11)) 
    result = (long long)p[0];
  else {
    v_7 = - (! p[1]) / ((int)p_15[2][0] + 1016);
    v = ((long)(v_7 >> (v_9 & 31ULL)) + ! v) + (long)(! ((int)p_11 + v_13));
    result = (long long)(! (p_4[1][1][0] / 1308ULL) >> (((unsigned long long)(
                                                         result * (long long)v) ^ (
                                                         p_4[0][2][0] - 3940083314ULL)) & 63ULL));
  }
  return result;
}


