#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 878788830
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, float p_7, unsigned long long p_13)
{
  double v_15;
  long long v_11;
  short v_9;
  long v_4;
  short v;
  short result;
  v_15 = 6.65341984637e+37;
  v_11 = 207248226LL;
  v_9 = (short)((double)((-45634LL | (long long)(! p)) % -40LL) - -18. / (
                                                                  (double)(
                                                                  119ULL / (
                                                                  p_13 + 245ULL)) * (
                                                                  -516800320. * v_15) + 522.));
  v_4 = 40415L;
  v = (short)(26973.f * ((float)((int)((short)p_7) - (int)v_9) * (18020.f - p_7)) - (float)v_11);
  result = (short)(! (~ ((long)(-762900169 / ((int)v + 661)) & (v_4 - (long)p))));
  return result;
}


