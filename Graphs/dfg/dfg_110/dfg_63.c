#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 245322005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, int p_9[2][3][2], long long p_11[1][3][3],
                   unsigned short p_13, short p_15[4][4])
{
  long v_7;
  float v_5;
  double v;
  unsigned short result;
  v_5 = (float)p_15[3][0];
  v_7 = (long)((long long)p_9[0][0][0] + - ((20320LL + p_11[0][0][0]) / (long long)(
                                            (int)p_13 + 540)));
  v = (double)(- (-60637LL * (long long)(- p) - (long long)p));
  result = (unsigned short)(- (v * p + (double)(- v_5)) * (double)(- v_7));
  return result;
}


