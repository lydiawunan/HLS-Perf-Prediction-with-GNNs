#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 845320536
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, long long p_7, long long p_11,
                  unsigned short p_13[1][2], int p_15)
{
  signed char v_9;
  short v_5;
  float v;
  unsigned long result;
  v_9 = (signed char)p_7;
  result = (unsigned long)p_13[0][0];
  v_9 = - v_9;
  v = (float)4294956967U;
  v_5 = (short)(2.35822024352e+38 + (double)(~ p / (unsigned long long)(
                                             (39 & p_15) + 707) - (unsigned long long)(
                                             (long long)(result / 3983198603UL) - 
                                             p_7 * (long long)p_15)));
  result = (unsigned long)((unsigned long long)(- (- v) * (float)((p ^ 18446744073709535206ULL) - (unsigned long long)(
                                                                  34430 | (int)v_5))) / (
                           ((unsigned long long)(p_7 - (long long)v_9) * ~ p) / (unsigned long long)(
                           - (p_11 ^ (long long)p_13[0][1]) + 488LL) + 156ULL));
  return result;
}


