#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 393587877
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, int p_7, long p_9, unsigned long long p_11, long p_13)
{
  int v_5;
  unsigned long v;
  double result;
  v_5 = (int)(~ (! (64L / (~ p_13 + 660L))));
  v = (unsigned long)(~ p_11);
  result = (double)((long)((int)(- ((float)v_5 * 3252599040.f)) << (! p_7 & 31)) - p_9);
  result = (double)(((unsigned long long)p + ((unsigned long long)v / 29356ULL) / 18446744073709551579ULL) / (
                    (unsigned long long)(- (24483. / (- result + 837.))) + 77ULL));
  return result;
}


