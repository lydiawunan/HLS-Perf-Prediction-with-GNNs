#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 63742190
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, long long p_5, long long p_9, long long p_11,
                signed char p_15[4])
{
  unsigned char v_13;
  double v_7;
  unsigned long v;
  signed char result;
  v_13 = (unsigned char)(18446744073709538617ULL % ((((unsigned long long)p_15[3] - 18446744072636498839ULL) + (unsigned long long)(
                                                     p + 28929)) + 985ULL));
  if (p_11 != (long long)v_13) result = (signed char)-114;
  else {
    v = (unsigned long)p_9;
    v_7 = (double)(! (! ((unsigned long long)p_9 ^ 18446744073209652701ULL)));
    result = (signed char)((double)(~ (~ p)) + ((double)((long long)v * p_5) - (
                                                -2.70754976684e+38 + v_7)));
  }
  return result;
}


