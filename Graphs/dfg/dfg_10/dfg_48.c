#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906456687
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, long p_4, unsigned int p_9, long p_15, float p_17)
{
  double v_19;
  long v_13;
  unsigned char v_11;
  double v_7;
  signed char v;
  unsigned short result;
  v_19 = -7215552633.95;
  v = (signed char)p_9;
  v_13 = (long)(((double)(- p_17) * (((double)p_15 - v_19) / ((double)(- p_4) + 313.))) / (
                - ((double)((int)((short)-2.97099712339e+38) / ((int)p + 334)) * -295.804121839) + 8.));
  v_11 = (unsigned char)(41682758LL % (long long)(v_13 / (p_15 + 379L) + 150L));
  v_7 = (double)v_11;
  result = (unsigned short)((long)(! (- (! p))) + (~ (p_4 ^ (long)v) - (long)(
                                                   -8016 / ((int)(v_7 / (
                                                                  (double)p_9 + 395.)) + 851))));
  return result;
}


