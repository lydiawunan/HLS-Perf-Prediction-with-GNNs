#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 36512941
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, float p_5)
{
  long long v_9;
  unsigned long long v_7;
  int v;
  int result;
  v_9 = -18013LL;
  v_7 = (unsigned long long)(! (~ (! 0)));
  result = (int)((v_7 / (unsigned long long)(- v_9 + 706LL)) % ((unsigned long long)-2.83287599273e+38f + 322ULL));
  v = (int)(! p);
  result = (int)((float)((unsigned long long)((999382851LL + (long long)result) % 180007403LL) % 918ULL) + - (
                 (float)(~ v) * - p_5));
  return result;
}


