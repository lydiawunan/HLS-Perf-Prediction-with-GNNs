#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 324641637
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, double p_7, unsigned long long p_9,
                long p_11)
{
  unsigned long long v_5;
  signed char v;
  signed char result;
  v_5 = 18446744073709513720ULL;
  v_5 = (p_9 << (! p_11 & 63L)) % (v_5 + 634ULL);
  result = (signed char)p_7;
  v = (signed char)(! (((unsigned long long)p & v_5) % (unsigned long long)(
                       (int)result + 939)));
  result = v;
  return result;
}


