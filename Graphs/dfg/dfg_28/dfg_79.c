#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 246675220
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, long long p_4, unsigned long long p_6,
          unsigned short p_13[4][5][3])
{
  double v_15;
  double v_11;
  float v_9;
  unsigned long long v;
  short result;
  v_15 = -8691994956.96;
  v_9 = (float)p_6;
  v_11 = (double)p_13[2][0][0] + v_15;
  v = (unsigned long long)(- ((double)(- (- v_9)) / (- (- v_11) + 499.)));
  result = (short)v;
  result = (short)((5587682.f - (- p + p)) - (float)(18446744073709551546ULL * (
                                                     (unsigned long long)(
                                                     83LL + p_4) * (p_6 % (unsigned long long)(
                                                                    (int)result + 420)))));
  return result;
}


