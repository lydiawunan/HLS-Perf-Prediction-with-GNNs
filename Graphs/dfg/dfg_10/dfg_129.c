#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 318821409
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[1], float p_4, float p_9, char p_11, short p_13)
{
  unsigned char v_15;
  long v_7;
  unsigned int v;
  double result;
  v_7 = (long)p_11;
  result = -7436972834.3;
  v_15 = (unsigned char)(~ (! ((int)((short)result) + (int)p_13) / ((int)(
                                                                    (float)p_13 * p_4 + 73.f) + 975)));
  v_7 *= (long)((- p_4 - 0.f) / (p_4 + 332.f));
  v = (unsigned int)(result * (double)((v_7 + (long)p_9) % ((long)(- p_4) + 379L)) - (double)(
                     (int)(! (- p_11)) / ((((int)p_13 + -13) & (int)v_15) + 149)));
  result = (double)((unsigned int)(- ((int)p[0] * (int)((short)p_4))) + v);
  return result;
}


