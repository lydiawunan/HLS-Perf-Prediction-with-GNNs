#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 29208669
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, char p_7, unsigned long long p_9, signed char p_13,
                short p_15)
{
  unsigned long long v_11;
  char v_4;
  signed char v;
  signed char result;
  v = (signed char)p;
  v_11 = (unsigned long long)((int)(- (- ((float)p_15 - -50.4093704224f))) % (
                              ((int)p_13 + (int)p_13) * ! (-59379 / (
                                                           (int)v + 36)) + 728));
  v_4 = (char)(- (((unsigned long long)(-9.65111029383e+37 + (double)p_9) % (
                   v_11 / 177756092ULL + 254ULL)) / (unsigned long long)(
                  (int)p_13 + 312)));
  v = (signed char)(~ (! (-535216686LL * (long long)p + (long long)p_7)));
  result = (signed char)((int)v - (int)v_4);
  return result;
}


