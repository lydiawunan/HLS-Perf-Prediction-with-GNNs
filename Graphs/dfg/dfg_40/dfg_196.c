#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 352199163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, int p_7, signed char p_13, signed char p_17,
              long long p_19)
{
  long long v_15;
  unsigned long v_11;
  double v_9;
  unsigned int v_4;
  double v;
  long long result;
  v_15 = -23924LL;
  v_11 = 4294915147UL;
  v_9 = -2.8571296427e+37;
  v = (double)p_17;
  result = (long long)(((unsigned long)v_9 * (v_11 - (unsigned long)p_13)) / 3UL) + (
           (! v_15 + (long long)p_17) - ~ (p_19 - 143LL));
  v_4 = (unsigned int)((unsigned long)(- (((int)p / 13713) / (p_7 + 687))) / 36293UL);
  v_4 = ~ (v_4 - (unsigned int)(- v)) ^ v_4;
  result = ~ ((result - (long long)((unsigned int)v * v_4)) % (long long)(
              - (v_4 * (unsigned int)v) + 481U));
  return result;
}


