#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1071407784
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, short p_5, unsigned long p_7, double p_9)
{
  unsigned long v_15;
  unsigned long v_13;
  unsigned long long v_11;
  double v;
  double result;
  v_15 = 649265798UL;
  v_11 = (unsigned long long)v_15;
  v_13 = (unsigned long)p_5;
  v = p_9 * (double)(! (v_11 + 16ULL) + (unsigned long long)v_13);
  result = (double)(((unsigned long)(31825U % (unsigned int)(p + 50) | (unsigned int)(
                                     -124 + (int)((char)v))) - (unsigned long)(
                     ((long)p_5 % 170716417L) % ((long)-4611425280.f + 105L))) * (
                    7229UL & p_7));
  return result;
}


