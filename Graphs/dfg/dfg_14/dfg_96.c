#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 27980592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, char p_7, float p_9, float p_13[4][4][4],
                       unsigned char p_15)
{
  double v_17;
  signed char v_11;
  unsigned char v_5;
  int v;
  unsigned long long result;
  v_17 = -741.458296593;
  v_5 = (unsigned char)p_9;
  v = -23675;
  result = 55466ULL;
  v_11 = (signed char)((long long)(- v_17) / ((((long long)p_7 - 4285LL) | (
                                               p + -600734905LL)) % (long long)(
                                              (int)v_5 + 515) + 17LL));
  result = (unsigned long long)((long long)(v * (int)v_5) / (- p + 603LL) ^ (long long)(~ (
                                (int)p_7 * (int)((char)p_9)))) + (unsigned long long)(
                                                                 (float)(
                                                                 (int)v_11 + (int)p_7) * - p_13[2][3][0]) * (
                                                                 result % (unsigned long long)(
                                                                 ((long long)p_15 - 91467662LL) + 606LL));
  result = - (- (78ULL & result)) % ((15237ULL - (unsigned long long)(
                                                 12586LL * p) * (18446744073709500300ULL * result)) + 539ULL);
  result = ~ result - 25598ULL;
  return result;
}


