#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415399940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long long p_4, short p_6,
                long long p_8, long p_10[3][1][5])
{
  unsigned short v_17;
  long v_15;
  unsigned short v_13;
  unsigned short v;
  signed char result;
  v_17 = (unsigned short)47726;
  v = (unsigned short)p_8;
  v_15 = (long)(3907684079UL + (unsigned long)v_17);
  v_13 = (unsigned short)p_10[1][0][1];
  result = (signed char)((-1LL - (long long)p_10[1][0][1]) + (long long)(
                         (unsigned long)(! (-40 / ((int)v + 151))) % (
                         ((unsigned long)(p * (unsigned int)v_13) + (unsigned long)v_15) + 231UL)));
  result = (signed char)(~ ((unsigned long long)(39927U + p) * (p_4 + (unsigned long long)result)) + (unsigned long long)(! (
                         100LL * ((long long)p_6 * p_8))));
  return result;
}


