#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 229089819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p[1][1])
{
  double v_14;
  unsigned long v_12;
  long long v_10;
  long v_8;
  double v_6;
  signed char v_4;
  unsigned long long v;
  unsigned long long result;
  v_14 = (double)p[0][0];
  v_12 = (unsigned long)p[0][0];
  v_10 = (long long)p[0][0];
  v_8 = -203353601L;
  v_6 = -2.50118354702e+38;
  v = 18446744072769192481ULL;
  result = (unsigned long long)p[0][0];
  v_10 = (long long)(((unsigned long long)((long long)((int)p[0][0] % 27289) % (
                                           - v_10 + 161LL)) / ((unsigned long long)(- v_14) * result + 405ULL)) / (unsigned long long)(
                     - (~ (54888971UL * (unsigned long)p[0][0])) + 753UL));
  v_4 = (signed char)((unsigned long long)(((v_12 + (unsigned long)v_14) ^ 4294914271UL) & (unsigned long)(
                                           ((int)p[0][0] - (int)p[0][0]) % (
                                           (int)(! p[0][0]) + 83))) / (
                      ((unsigned long long)((3500759808. + v_6) + (double)(
                                            v_10 * (long long)p[0][0])) + 29122ULL) + 688ULL));
  v = ((unsigned long long)((long)((int)((signed char)v_6) * 90) % (~ v_8 + 36L)) - v) - (unsigned long long)((long long)(
      v_8 * 830652159L));
  result = 18446744073709538116ULL * ((~ result + 36436ULL) % (((v - 75ULL) - (unsigned long long)(~ v_4)) + 452ULL));
  return result;
}


