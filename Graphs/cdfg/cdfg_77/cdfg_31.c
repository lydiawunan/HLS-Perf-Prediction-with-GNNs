#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 541054275
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p[1], unsigned long p_5, unsigned int p_7,
              unsigned long long p_11, char p_21)
{
  unsigned char v_25;
  unsigned int v_23;
  unsigned long long v_19;
  unsigned int v_17;
  unsigned char v_15;
  long long v_13;
  double v_9;
  int v;
  long long result;
  v_25 = (unsigned char)136;
  v_23 = (unsigned int)p_11;
  v_19 = (unsigned long long)p_21;
  v_17 = 14689U;
  v_15 = (unsigned char)p_11;
  v_9 = (double)p_7;
  while ((unsigned long long)((double)(! (~ v_15)) / (- (v_9 * (double)v_23) + 452.)) == 
         - (p_11 - p_11) / (unsigned long long)(p[0] + 162U)) {
    v_19 = (int)v_25 - 31727;
    v_25 = (unsigned char)123;
    v_9 = (double)((-81 | 51 % ((int)((signed char)527.515557025) + 582)) % 459);
    v_23 = (unsigned int)((p_11 + (unsigned long long)p_5) >> ((p_5 * (unsigned long)p_7) % (
                                                               (unsigned long)-256.817997621 + 295UL) & 63UL));
  }
  while_0_break: ;
  if ((unsigned long long)v_17 < 77766ULL % ((v_19 ^ 59892ULL) / (unsigned long long)(
                                             ((unsigned int)p_21 - v_23) + 115U) + 32ULL)) {
    v = (int)(-783664128UL);
    result = ((long long)(~ p[0]) % ((long long)v / -173693937LL + 44LL)) / (long long)(
             (unsigned long)(1.94153726718e+38 + (double)p_5) * ((unsigned long)p_7 / (
                                                                 p_5 + 546UL)) + 812UL);
  }
  else {
    v_13 = (long long)v_15;
    v_9 = (double)v_13;
    result = (long long)((unsigned long long)(- (p_5 | (unsigned long)p_7)) ^ (
                         (unsigned long long)(v_9 / 3747740619.) ^ p_11 / 18446744073709504966ULL));
  }
  return result;
}


