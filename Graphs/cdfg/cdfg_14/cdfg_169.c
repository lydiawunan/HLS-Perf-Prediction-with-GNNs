#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 229008666
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned int p_11)
{
  long v_15;
  int v_13;
  double v_9;
  unsigned char v_7;
  long v_5;
  unsigned long long v;
  long long result;
  v_13 = -875333666;
  v_7 = (unsigned char)p;
  v_5 = 55429L;
  v = 740437624ULL;
  result = (long long)p_11;
  v_15 = (long)(! (v_13 * 24210));
  while ((unsigned long long)(~ p | ! (-6L * p)) != (~ (6345ULL - v) & 18446744073709551615ULL)) {
    v_5 = (long)v_7 ^ (v_5 + 38L);
    v_9 = (double)((unsigned long)(! (p_11 * p_11)) * (unsigned long)v_15);
    result = ! ((long long)(~ p_11) + (long long)v_13 * -21258LL);
    v = (unsigned long long)((long)v_9 - ! (- p));
  }
  while_0_break: ;
  return result;
}


