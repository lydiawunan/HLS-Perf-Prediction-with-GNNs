#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 6072505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_5, float p_11, char p_13,
              unsigned long long p_15)
{
  char v_17;
  signed char v_9;
  short v_7;
  char v;
  long long result;
  v_17 = (char)-91;
  v = p_13;
  v_9 = (signed char)v_17;
  result = (long long)(- (p | (unsigned long long)v_9) * 18446744073709533234ULL - - (
                       (p_15 ^ p) - (unsigned long long)-9.22236094076e+37f));
  v_7 = (short)((long long)((double)(- ((int)v % 4928)) - -3756849738.62) % (
                (long long)(((float)v_9 * p_11) / ((float)(! p_13) + 91.f)) % (
                (result | -40LL) * 177LL + 827LL) + 82LL));
  result = (214LL ^ -1134003617792LL * - result) >> (((unsigned long long)(! v) - 
                                                      p / (unsigned long long)(
                                                      p_5 + 138UL)) * (unsigned long long)(~ (
                                                     (int)v_7 >> (p & 15ULL))) & 63ULL);
  return result;
}


