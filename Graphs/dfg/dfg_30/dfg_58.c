#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 384521050
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p[3], float p_7, unsigned char p_13, long p_19)
{
  long long v_17;
  unsigned int v_15;
  unsigned long v_11;
  unsigned long long v_9;
  unsigned char v_4;
  float v;
  double result;
  v_17 = (long long)p[0];
  v_15 = (unsigned int)p_7;
  v_11 = 579351803UL;
  v_9 = 14252ULL;
  v_11 = (unsigned long)(((long long)(4294952350U | v_15) & v_17) % (long long)(
                         (4294940208UL - v_11) + 989UL) ^ (long long)(
                         (float)(((long long)p_19 | -163614368LL) - 26836LL) / (
                         - (- p_7) + 684.f)));
  v = (float)(18446744073709516215ULL + (18446744023589853376ULL * (unsigned long long)(
                                         (float)p_13 / (p_7 + 9.f))) * 116ULL);
  v_4 = (unsigned char)(46660L + (long)((float)((unsigned long long)p[1] ^ (
                                                (unsigned long long)p_7 & v_9)) * (
                                        (float)(- v_11) / (- p[1] + 642.f))));
  result = (double)((unsigned long)(0.f - v) % (- ((3266056259UL * (unsigned long)v_4) * 4294949034UL) + 785UL));
  return result;
}


