#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 592008062
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, unsigned long long p_9)
{
  signed char v_7;
  double v_5;
  unsigned long v;
  long long result;
  v_7 = (signed char)-85;
  v_5 = (double)((unsigned long long)(! (~ p) % (long)((int)(- (~ v_7)) + 358)) * ~ (- p_9));
  v = (unsigned long)(111L * - ((p ^ (long)v_5) % ((p + p) + 748L)));
  result = (long long)(p >> (! ((697200846UL + v) - 96UL) & 31UL));
  result = result;
  return result;
}


