#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 884870301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, long long p_7, unsigned long long p_9, long p_11,
           float p_13)
{
  float v_4;
  signed char v;
  double result;
  v_4 = 5924145152.f;
  v = (signed char)p_9;
  result = (double)v_4;
  v = (signed char)((int)((- result - (double)p_11) + (double)(- p_13)) | (
                    (int)v >> ((int)((signed char)(p_13 / -533298272.f)) & 7)));
  result = (double)((long long)((float)(! p_9) * - v_4) % ((long long)(- (- v_4)) / (
                                                           ~ p_7 + 44LL) + 513LL));
  result = (double)((float)((long long)(43925 + -13888 % ((int)((short)result) + 599)) * (
                            246143791LL * (long long)v)) * - ((v_4 - (float)p) - (float)(! p_7)));
  return result;
}


