#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823087569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, long p_4, short p_6, signed char p_8,
        unsigned long p_10)
{
  int v_17;
  unsigned long long v_15;
  unsigned int v_13;
  unsigned int v;
  int result;
  v_17 = (int)p;
  v_15 = 61944ULL;
  v_13 = (unsigned int)p_8;
  v = (unsigned int)p;
  result = 975658214;
  while ((unsigned long)(- (p_4 / -22047L)) - (unsigned long)v_13 >= (unsigned long)result) {
    v_17 >>= v_15 * 18446744073709501291ULL & 31ULL;
    v = (unsigned int)(- (- (-7588146688.f / ((float)p_6 + 595.f))));
    v_15 = (unsigned long long)(62UL + (unsigned long)(-9929L + (long)p_8) * (
                                       (unsigned long)p + p_10));
    result = (int)((unsigned long)(-8326687151.79 + (double)(- v_13)) % (
                   ! (p_10 - (unsigned long)p_8) + 285UL));
  }
  while_0_break: ;
  if ((unsigned long)v <= p_10) result = (int)((unsigned long)(((long)p * p_4) * (long)(
                                                               (int)p_6 << (
                                                               (int)p_8 & 15))) * p_10);
  else result = -20387;
  return result;
}


