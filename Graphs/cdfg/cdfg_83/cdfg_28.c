#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 597100920
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, long long p_11)
{
  double v_9;
  signed char v_7;
  unsigned short v_5;
  unsigned char v;
  double result;
  v_9 = (double)p;
  v_5 = (unsigned short)45592;
  v = (unsigned char)85;
  result = -516.057288961;
  v_7 = (signed char)((long long)(494.589752197 / (result + 465.) - (double)(
                                  p * -58)) % ((42LL + p_11) * (long long)p + 921LL));
  result = (double)(((unsigned long long)v / 18446744073709496211ULL & (unsigned long long)(
                     p & (int)v_5)) - (unsigned long long)(-23816LL - (long long)(
                                                           (int)v_7 / (
                                                           (int)((signed char)v_9) + 342))));
  return result;
}


