#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 735388715
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p)
{
  unsigned long v_9;
  double v_7;
  signed char v_4;
  unsigned char v;
  signed char result;
  v_9 = 3659422750UL;
  v_7 = (double)v_9;
  v_4 = (signed char)((unsigned int)(((double)((unsigned int)p % 3401879460U) + (
                                      63662. + v_7)) - -3785462.55448) + 4216023000U);
  v = (unsigned char)v_4;
  result = (signed char)(! v);
  return result;
}


