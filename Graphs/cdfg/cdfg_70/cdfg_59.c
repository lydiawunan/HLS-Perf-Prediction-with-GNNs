#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1067442612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[3][3], double p_9, unsigned long p_11,
                unsigned int p_15)
{
  unsigned long v_13;
  int v_7;
  float v_5;
  long v;
  signed char result;
  v_13 = (unsigned long)p[1][0];
  v_7 = 450067079;
  v_5 = p[1][1];
  v = 11962L;
  result = (signed char)p[1][1];
  v_13 = (unsigned long)(5083864771.85 - (double)v_13);
  while (-116L != ~ ((long)(-1.87572677288e+38f * p[0][2]) - v)) {
    result = (signed char)((p_11 - v_13) / ((468483253UL % (p_11 + 293UL)) % (
                                            (unsigned long)((float)p_15 * v_5) + 18UL) + 557UL));
    v_5 = (float)v;
    v = (long)(v_7 % ((int)(- (p_9 * (double)result)) + 523));
  }
  while_0_break: ;
  return result;
}


