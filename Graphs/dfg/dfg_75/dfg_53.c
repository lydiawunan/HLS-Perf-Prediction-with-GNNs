#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5007640
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned short p_5, long p_7[5][3],
          unsigned long long p_9, long p_13)
{
  unsigned int v_17;
  double v_15;
  unsigned int v_11;
  long long v;
  short result;
  v_17 = 4294920458U;
  v_11 = 3579452301U;
  v = (long long)p;
  result = (short)p_5;
  v_15 = (double)(- (((unsigned long long)(- v) ^ 18446744073709505098ULL) % (unsigned long long)(
                     v_17 / ((unsigned int)(-405.133178711f / ((float)p_13 + 984.f)) + 733U) + 448U)));
  v = (long long)(- (- ((double)(730373771ULL / (p + 598ULL)) / 2.65273121077e+38)));
  v = (long long)(((unsigned long long)(- (p_7[4][1] % (long)((int)p_5 + 377))) - 
                   (p_9 / (unsigned long long)((int)p_5 + 197)) / (unsigned long long)(
                   v_11 % 133U + 112U)) * (unsigned long long)((v + (long long)(
                                                                p_13 + (long)p_5)) - (long long)(~ (
                                                               (int)((signed char)v_15) / 126))));
  result = (short)((unsigned long long)(- (- result)) % (! (p % (unsigned long long)(
                                                            v + 248LL)) + 496ULL) >> (
                   - ((long)p_5 - 960713812L) & 63L));
  return result;
}


