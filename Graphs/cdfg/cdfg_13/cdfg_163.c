#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 940935643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, long p_5, short p_7, long p_9)
{
  double v_11;
  unsigned long long v;
  long long result;
  v_11 = 979.021955756;
  if (p_9 / ((long)(- v_11) + 861L) == 63463L) {
    v = (unsigned long long)((2.6290006594e+38f - (float)p_7) - (float)p);
    result = (long long)((373.908599144 * (double)v) / ((double)p_5 + 480.));
    result = (long long)((unsigned long long)(~ result & (long long)(
                                              (int)5631693756.98 % -261474025)) - p);
  }
  else result = 14156LL;
  return result;
}


