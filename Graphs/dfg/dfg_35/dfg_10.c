#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 452482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, double p_9)
{
  char v_15;
  long long v_13;
  signed char v_11;
  short v_7;
  double v_5;
  unsigned long long v;
  long result;
  v_15 = (char)p_9;
  v_13 = 164222531LL;
  v_11 = (signed char)-46;
  v_5 = p_9;
  v = 34265ULL;
  result = (long)p_9;
  v_5 = (double)((long long)v_11 * v_13 - (long long)(~ (0UL % ((unsigned long)(
                                                                (double)v_15 * v_5) + 195UL))));
  v_7 = (short)p_9;
  result = - ((result | result) - (long)v_7) - result;
  result = (long)((float)((p / (unsigned long)(result + 76L)) % (unsigned long)(
                          - result + 379L)) / 1.79080047021e+38f + (float)(
                  (unsigned long long)result * ((v / (v + 961ULL)) / (unsigned long long)(
                                                ((int)((short)v_5) + 30994) + 401))));
  return result;
}


