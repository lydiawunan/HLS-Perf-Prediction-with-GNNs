#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305253353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, int p_5, unsigned char p_9, long p_11,
                long p_13)
{
  int v_17;
  long v_15;
  unsigned long long v_7;
  double v;
  signed char result;
  v_17 = (int)p_9;
  if ((double)(- v_17) - -414.480849802 < (double)p_5) {
    v_7 = (unsigned long long)((long long)((long)p_9 + p_11) + ((long long)p_11 + 59512LL));
    v = (double)(1277ULL % ((unsigned long long)(~ p_5) / (v_7 + 78ULL) + 907ULL));
  }
  else {
    v_15 = 1972L;
    v = (double)(p_13 % (v_15 + 64L));
  }
  result = (signed char)((unsigned long long)v | ~ p);
  return result;
}


