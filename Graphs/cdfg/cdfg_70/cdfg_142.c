#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 391394910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned long long p_7[2][5][1], unsigned long p_13)
{
  unsigned short v_15;
  float v_11;
  float v_9;
  unsigned short v_5;
  long long v;
  long long result;
  v_15 = (unsigned short)17606;
  v_11 = (float)p_7[1][2][0];
  v_9 = (float)p_13;
  v = (long long)p;
  if ((! p_7[0][3][0] + (unsigned long long)(- v_9)) / (unsigned long long)(
      v + 681LL) > (unsigned long long)((float)(1490 - (int)((short)(
                                                v_11 - (float)p))) - 
                                        (float)p_13 / ((float)v_15 * v_11 + 439.f))) 
    result = -31510LL;
  else {
    v_5 = (unsigned short)(-24711ULL);
    v = (long long)v_5;
    result = ~ ((long long)p % (v + 998LL) | 98LL);
  }
  result = ~ result;
  return result;
}


