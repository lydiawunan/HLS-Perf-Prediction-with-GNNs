#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 99082350
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p[1][5][2], float p_7, unsigned long p_9, char p_11,
              unsigned long long p_13)
{
  int v_15;
  double v_5;
  unsigned char v;
  long long result;
  v_15 = 45077;
  v_5 = 884.931375;
  v = (unsigned char)185;
  result = (long long)p_7;
  v_5 = (double)((long long)((long)p_11 % ((long)((int)p_11 << (p_13 & 7ULL)) / 330751073L + 226L)) + (
                 (long long)((int)p_11 - (int)((char)v_5)) * (result / (long long)(
                                                              (int)p_11 + 494)) ^ (long long)(
                 (long)(p_7 * (float)v_15) ^ -732483546L)));
  result = ! (- ((long long)(p_9 / (unsigned long)((int)p[0][2][1] + 843)) + result));
  result = (long long)((unsigned long long)(- ((double)(~ result) - -7.30708874278e+37)) / (
                       (unsigned long long)v * ((unsigned long long)(
                                                (int)p[0][2][0] % -115) * (
                                                (unsigned long long)p_7 ^ 59811ULL)) + 775ULL));
  result = (long long)((unsigned long long)(- ((result >> ((int)v & 63)) + (long long)(
                                               (int)p[0][0][1] | 28138))) / (
                       ! (6581724ULL | (unsigned long long)((int)((signed char)v_5) * 4)) + 799ULL));
  return result;
}


