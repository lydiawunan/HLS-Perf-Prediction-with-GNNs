#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764303865
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, long long p_5)
{
  long long v_11;
  unsigned long v_9;
  char v_7;
  char v;
  char result;
  v_11 = 26881LL;
  v_7 = (char)38;
  v_9 = (unsigned long)(- (~ v_11));
  result = (char)(! (v_9 + (unsigned long)(p + p)));
  v = v_7;
  result = (char)((long long)(p | (-660886083L + ((long)v + p))) % (! (
                                                                    (long long)result / (
                                                                    p_5 + 22LL) + 51138624LL) + 726LL));
  return result;
}


