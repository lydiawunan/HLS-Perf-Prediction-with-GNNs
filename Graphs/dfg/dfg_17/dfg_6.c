#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 960195049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, long long p_5, unsigned long p_7, short p_11,
              unsigned long p_13)
{
  unsigned long long v_9;
  int v;
  long long result;
  v_9 = (unsigned long long)(- ((~ p - (long long)(! p_11)) + (long long)(
                                576681342UL / (unsigned long)((int)(! p_11) + 600))));
  v = (int)(- p_13);
  result = (long long)((unsigned long long)(- ((31933LL + p_5) % ((long long)p_7 / (
                                                                  p_5 + 350LL) + 554LL))) / (
                       ((unsigned long long)(p_7 / 92UL) * (v_9 - (unsigned long long)p) - (unsigned long long)p_11) + 446ULL));
  result = ! (p % (result + 864LL) & (long long)-6.34336733749e+36f) / (long long)(
           v + 692);
  return result;
}


