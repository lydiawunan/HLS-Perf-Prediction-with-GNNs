#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 184626757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, double p_5, double p_9, float p_15,
                 long p_17)
{
  float v_13;
  unsigned long v_11;
  double v_7;
  int v;
  unsigned int result;
  v_11 = (unsigned long)p_17;
  v_7 = 754.740039189;
  result = 4294948751U;
  v_13 = (float)(- ((int)((char)(p_15 - (float)p_17)) % -88));
  if (- (51763. - v_7 * p_9) == (double)((- v_11 + 4294947262UL) * (unsigned long)(- v_13))) {
    v = (int)(- (((unsigned int)p | result) * 57639U));
    v = ~ (- v) - (int)p;
    result = (unsigned int)v;
  }
  else result = (unsigned int)(p_5 * 1069594286.);
  return result;
}


