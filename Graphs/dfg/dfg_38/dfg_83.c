#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 652961885
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p)
{
  signed char v_8;
  double v_6;
  signed char v_4;
  long long v;
  unsigned int result;
  v_8 = (signed char)116;
  v_6 = (double)(- ((2902ULL + (p + p)) * (~ p & 56171ULL)));
  v_4 = (signed char)(~ ((unsigned long long)(- v_6 * 104.) << (((unsigned long long)v_8 + 18446744073709501080ULL) & 63ULL)));
  v = (long long)(~ (- (- ((int)v_4 - 158))));
  result = (unsigned int)v;
  return result;
}


