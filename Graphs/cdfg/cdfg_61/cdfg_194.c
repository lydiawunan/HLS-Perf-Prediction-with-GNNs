#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 230915590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, signed char p_4, float p_6, char p_8[2][2],
                   long long p_13)
{
  double v_11;
  int v;
  unsigned short result;
  v_11 = 227.821368223;
  v = (int)p;
  v = (int)(((long)((int)p_4 / ((int)((signed char)p_6) + 888)) - p) * (long)v);
  if ((long long)v > (5909LL * ((long long)v_11 % 59888LL)) * p_13) result = (unsigned short)(
                                                                    (
                                                                    -2.16865527075e+38f - (float)(
                                                                    p * 73L)) + (
                                                                    (float)(
                                                                    26 + (int)p_4) - 9273033728.f));
  else result = (unsigned short)-8022362200.73;
  return result;
}


