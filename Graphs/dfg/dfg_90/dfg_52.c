#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 15878679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p[2][3], long long p_5, long long p_7, short p_11,
           int p_17)
{
  unsigned long long v_15;
  short v_13;
  long long v_9;
  unsigned char v;
  double result;
  v_15 = 30669ULL;
  v_9 = -547984580LL;
  result = (double)p_17;
  v_13 = (short)((double)(- v_15) / (- ((double)((float)v_15 / 2.07927819612e+38f) - 39515171.8687) + 733.));
  v = (unsigned char)(! ((unsigned int)p_11 | 51802U / ((unsigned int)(
                                                        result - (double)v_13) + 781U)));
  result = (double)(((! p[1][1] - (long long)(-117 - (int)v)) + (p_5 / (
                                                                 p_7 + 792LL) - (
                                                                 v_9 - 4181931831LL))) * 203LL);
  return result;
}


