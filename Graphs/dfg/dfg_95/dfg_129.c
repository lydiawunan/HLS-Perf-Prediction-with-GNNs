#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82916408
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, signed char p_7, double p_9)
{
  unsigned long v_11;
  signed char v_5;
  long v;
  double result;
  v_5 = (signed char)67;
  v = (long)p_9;
  v_11 = 4294967266UL;
  v_5 = (signed char)(94654822UL / ((v_11 - (unsigned long)(-4727 / (
                                                            ((int)v_5 - (int)v_5) + 395))) + 968UL));
  result = (double)(- -11841L);
  result = (double)(((unsigned long long)(p * v) / (4941ULL * (unsigned long long)v_5 + 469ULL) - (unsigned long long)((unsigned int)p_7)) - (unsigned long long)(
                    result - p_9));
  return result;
}


