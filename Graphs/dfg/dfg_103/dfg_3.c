#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741395385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, long long p_4)
{
  unsigned int v_7;
  unsigned long long v;
  char result;
  v_7 = 4294917852U;
  v_7 = v_7;
  result = (char)(~ (~ (8407U + v_7) ^ ~ v_7));
  v = (unsigned long long)(-1LL / (- (- p_4 + (p + (long long)result)) + 438LL));
  result = (char)((18446744073709498325ULL | 90816974ULL / (unsigned long long)(
                                             (int)result / 29230 + 985)) - (unsigned long long)(
                  - ((long long)result + p) + (~ p >> ((unsigned long long)p_4 / (
                                                       v + 976ULL) & 63ULL))));
  return result;
}


