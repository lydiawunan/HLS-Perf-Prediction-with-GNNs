#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 271433806
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, long p_5, double p_9, unsigned int p_11)
{
  long long v_7;
  unsigned short v;
  signed char result;
  v_7 = 24798LL;
  v_7 = ~ (- ((long long)p_9 - v_7)) % (long long)(p_11 + 666U);
  v = (unsigned short)((long long)(4294959915U | (unsigned int)p) / (
                       v_7 + 890LL));
  result = (signed char)(((long long)(((int)v & (int)p) % ((int)(~ p) + 108)) - -44312LL) - (long long)(
                         (unsigned long)v % (848254083UL % (unsigned long)(
                                             p_5 + 506L) + 563UL)));
  return result;
}


