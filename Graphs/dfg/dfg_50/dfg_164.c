#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 623764164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_11)
{
  unsigned long long v_9;
  unsigned long long v_7;
  double v_5;
  short v;
  double result;
  v_9 = (unsigned long long)p;
  v_7 = (unsigned long long)p;
  v = (short)(- (~ (~ p_11 % (unsigned long long)((int)p + 10))));
  v_7 = - ((v_9 ^ 18446705943553399552ULL) % (v_7 + 4ULL));
  v_5 = (double)(- ((long)(52779 * (int)((unsigned short)367282153.683)) * (
                    -19814L / (long)((int)v + 715) - (long)(- p))));
  result = (double)((unsigned long long)((double)((int)p * (int)v - (int)1.51195451849e+38) + (
                                         9. + - v_5)) & 0ULL / (! (- v_7) + 120ULL));
  return result;
}


