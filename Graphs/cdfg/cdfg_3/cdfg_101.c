#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 443184220
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[2][2], unsigned long long p_9, signed char p_11, int p_15)
{
  unsigned short v_13;
  unsigned short v_7;
  float v_5;
  unsigned long long v;
  int result;
  v_13 = (unsigned short)28293;
  v_5 = (float)p[0][1];
  if (0 != (int)v_5) {
    v_5 = (float)(~ (~ p_9));
    v_7 = - (! (unsigned short)17808);
    v = (43713ULL * (unsigned long long)v_7) / (unsigned long long)((
                                                                    (int)(~ v_7) + (int)p[1][1]) + 991);
  }
  else {
    result = ! (- ((int)p_11 % ((int)p[1][0] + 769)));
    v_7 = (unsigned short)((int)(! p_11) / (- (result / ((int)v_13 + 921)) + 366));
    v = (unsigned long long)(! v_7);
  }
  result = (int)((float)v * - ((float)p[0][1] - v_5));
  return result;
}


