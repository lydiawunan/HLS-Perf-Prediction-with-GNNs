#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 791998993
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, int p_5, unsigned long long p_7, int p_9)
{
  long long v_11;
  signed char v;
  double result;
  v_11 = (long long)(4294937511UL * (0UL - ((108781102UL - (unsigned long)-5373671081.98) - 372629984UL)));
  v = (signed char)((p_7 * (unsigned long long)(~ (57508L | (long)p_9))) % (unsigned long long)(
                    (3712857088LL ^ v_11) + 72LL));
  result = (double)((unsigned long long)(((unsigned long)v / (p + 7UL) + (
                                          53149UL + p)) | (unsigned long)(! (~ p_5))) % (
                    p_7 + 43ULL));
  return result;
}


