#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1007358684
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, float p_11, unsigned int p_15)
{
  unsigned int v_13;
  long v_9;
  unsigned int v_7;
  unsigned long long v_5;
  long long v;
  long result;
  v_13 = 761323744U;
  v_9 = -58016L;
  v_7 = 4294948789U;
  v = (long long)p;
  result = 38135L;
  if (- (- (v * 570LL)) == 110LL) {
    v_5 = ~ ((unsigned long long)(37029L + v_9) % (- p + 313ULL));
    result = (long)(! (-18446744073709530318ULL));
    v = (long long)(- (- ((unsigned long long)result % (p + 1016ULL))));
  }
  else {
    v_9 = (long)(- p_11 + (float)(36317ULL * p + 474ULL));
    v_7 = (unsigned int)p_11;
    v_5 = 11887ULL;
  }
  while (18446744073124802713ULL % (! ((unsigned long long)result & p) + 388ULL) >= (unsigned long long)v) {
    v = (unsigned long long)v_7 * (v_5 / 18446744073709551537ULL);
    v_7 = (unsigned int)(((unsigned long long)v % (p + 403ULL) + (unsigned long long)(
                          v_9 + 62901L)) - (unsigned long long)((44LL - v) * 36346LL));
    v_5 = (unsigned long long)(- (27U + (v_13 ^ p_15)));
    v = (long long)(((p ^ (unsigned long long)-1.56060333558e+38f) - (unsigned long long)(
                     p_11 - (float)p)) / (unsigned long long)(v_7 + 924U));
  }
  while_0_break: ;
  return result;
}


