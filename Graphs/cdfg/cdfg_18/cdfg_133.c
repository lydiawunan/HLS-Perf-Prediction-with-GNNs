#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228166123
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[5][3][2], signed char p_9, long long p_13)
{
  long long v_11;
  long v_7;
  unsigned long v_5;
  unsigned long long v;
  unsigned long result;
  v_11 = (long long)p_9;
  v_7 = 58509L;
  v_5 = (unsigned long)p_9;
  v = 924928338ULL;
  result = 52198UL;
  while ((unsigned long long)result == ! (- (v * 4294943795ULL))) {
    v = v_5 % 57419UL;
    v_5 = (unsigned long)((unsigned long long)p_13 ^ (v ^ (unsigned long long)p_13));
    v = (unsigned long long)v_11;
    result = (unsigned long)((long)p[3][0][0] % (v_7 + 911L) - (long)p_9);
  }
  while_0_break: ;
  result = ! (! result) << (~ (~ p[0][0][0]) & 31);
  return result;
}


