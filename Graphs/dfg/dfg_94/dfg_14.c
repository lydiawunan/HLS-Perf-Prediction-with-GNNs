#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1033705701
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p, unsigned long long p_5, unsigned long long p_7,
                long long p_9, short p_11)
{
  signed char v_15;
  signed char v_13;
  double v;
  signed char result;
  v_13 = (signed char)p_9;
  v = -2.74056447663e+38;
  v_15 = (signed char)(0 - (int)v_13);
  v = (double)((long long)((int)v_13 * (int)(- v_15)) / (! p_9 / (long long)(
                                                         (((int)v_13 - (int)p_11) - (int)(- p_11)) + 61) + 573LL));
  result = (signed char)(- ((double)(~ ((unsigned long long)p_11 - 18446744073709491600ULL)) - 
                            (double)((unsigned long)p / 3993586012UL) * 840.457130518));
  result = (signed char)((unsigned long long)(! (((int)result - (int)((signed char)v)) - (int)p)) ^ (
                         p_5 + (~ p_7 + (unsigned long long)(- p_9))));
  return result;
}


