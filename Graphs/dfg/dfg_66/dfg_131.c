#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 395167025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p)
{
  signed char v_9;
  double v_7;
  signed char v_5;
  unsigned int v;
  unsigned int result;
  v_9 = (signed char)p;
  v_5 = (signed char)p;
  v = (unsigned int)p;
  v_7 = (double)v_9;
  result = (unsigned int)(- (v_7 * v_7) * (- v_7 / -2.97885964997e+38) + -126.);
  result = (unsigned int)((unsigned long)v * ((unsigned long)result % (unsigned long)(
                                              p + 781L) - (unsigned long)v_5));
  result *= 3981U;
  return result;
}


