#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 386226284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, float p_4[1], unsigned short p_7)
{
  unsigned long v;
  int result;
  result = (int)((float)(~ ((int)p_7 * (64456403 << 31))) * ((42380.f + - p_4[0]) / -9640164352.f));
  result = - result;
  v = 41504UL;
  result = (int)((60208UL * (unsigned long)(result / ((int)p + 339)) & (unsigned long)(~ (
                  (int)p_4[0] + result))) / (v + 610UL));
  return result;
}


