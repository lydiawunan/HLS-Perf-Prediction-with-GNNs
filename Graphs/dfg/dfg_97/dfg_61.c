#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 496986254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, short p_5, int p_9, long p_13[1][4], short p_15)
{
  unsigned long long v_11;
  unsigned long v_7;
  char v;
  double result;
  v_11 = (unsigned long long)(! ((p_13[0][2] - (long)p_15) / (long)((int)p + 328)));
  v = (char)v_11;
  v_7 = (unsigned long)(6574 % (p_9 + 518));
  result = (double)((long long)((((int)v | (int)p) ^ -640) * ((int)p_5 + (
                                                              119 << 2))) * ~ (
                    509635677LL | (long long)v_7 / -852066408LL));
  return result;
}


