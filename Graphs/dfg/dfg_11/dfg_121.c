#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 799526148
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned long p_4, long long p_9, double p_13,
         unsigned short p_17[1])
{
  float v_15;
  long long v_11;
  unsigned char v_7;
  unsigned int v;
  long result;
  v_15 = (float)p;
  v_11 = ~ ((long long)(p_4 * (unsigned long)p_17[0]) + - p_9) / -79LL;
  v_7 = (unsigned char)v_15;
  v = (unsigned int)(~ ((long long)v_7 * ~ p_9) / (v_11 * (long long)(- (
                                                   (long)p_13 % 347498400L)) + 356LL));
  result = (long)((- (-41473LL + p) - (long long)(p_4 >> 29ULL)) / (long long)(
                  v * 4294967179U + 194U));
  return result;
}


