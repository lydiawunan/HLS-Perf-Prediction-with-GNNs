#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 60339781
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned long p_7, short p_9, char p_11[5], double p_15)
{
  unsigned long long v_19;
  double v_17;
  short v_13;
  unsigned long long v_5;
  double v;
  short result;
  v_19 = 18446744073709519280ULL;
  v_17 = p_15;
  v = p_15 * ((-8279982896.14 - v_17) - (double)((unsigned long long)(
                                                 4294904215UL % (unsigned long)(
                                                 (int)p + 938)) - (251ULL + v_19)));
  v_13 = (short)((unsigned long)((double)(~ ((long)v >> 3L)) - p_15));
  v_5 = (unsigned long long)(! (- ((int)p_9 / ((int)p_11[4] * (int)v_13 + 648))));
  result = (short)((unsigned long)(0 - (int)((v + (double)p) - v / ((double)v_5 + 871.))) / (
                   p_7 + 612UL));
  return result;
}


