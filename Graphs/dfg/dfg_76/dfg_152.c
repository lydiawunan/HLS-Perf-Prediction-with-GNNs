#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33478840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p, unsigned char p_7)
{
  short v_9;
  char v_5;
  unsigned long v;
  double result;
  v_5 = (char)p;
  result = 5050936138.48;
  v_9 = (short)((int)((unsigned char)(result / ((double)((int)p - (int)v_5 * -97) + 904.))) * 98);
  v = (unsigned long)((unsigned int)v_5 + 1272636U * (unsigned int)((int)p_7 * (int)p_7 - (
                                                                    (int)p_7 - (int)v_9)));
  v = (unsigned long)((((long long)(-22790 - (int)((short)p)) + 42645LL) >> 43UL) * (long long)(
                      (unsigned long)(~ (61 >> 1)) - ~ (15UL + v)));
  result = (double)0UL;
  return result;
}


