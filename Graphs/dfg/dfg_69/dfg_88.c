#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 203671220
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, long p_5, unsigned short p_7[2], float p_13,
              double p_17)
{
  double v_15;
  int v_11;
  long long v_9;
  long long v;
  long long result;
  v_15 = (double)p_5;
  v_9 = (long long)p_7[0];
  v = 24099LL;
  v_11 = (int)(((double)((int)((signed char)1.88449080207e+38f) * -10) - 
                (double)(30719ULL / (unsigned long long)((int)p_7[1] + 659)) / (
                (double)p_5 * p_17 + 418.)) - (double)(- ((26938LL + v) % (
                                                          (long long)(
                                                          p + 2504428544.) + 166LL))));
  result = (long long)((double)((long)(~ p_7[0]) ^ -827759533L) - - (
                       - v_15 + (double)(v - 577210771LL)));
  v = (long long)(p_5 % (long)(! (48926 % ((int)p_7[0] + 336)) + 47)) * (
      ~ (result % (v_9 + 141LL)) * (long long)(- ((float)v_11 - p_13)));
  result = (long long)(- ((double)(- (v ^ -32515LL)) + (p / -44828. - p)));
  return result;
}


