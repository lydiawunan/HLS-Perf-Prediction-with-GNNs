#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 754499419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, char p_7, unsigned long p_11, float p_15,
                       unsigned long long p_19)
{
  unsigned char v_17;
  long v_13;
  double v_9;
  long v_4;
  long long v;
  unsigned long long result;
  v_17 = (unsigned char)136;
  v_9 = 76.7477220048;
  v_13 = (long)((unsigned long long)((int)((float)p_11 * p_15) / (23773 / (
                                                                  (int)v_17 + 928) + 878)) / (
                (18446744073709538055ULL - (unsigned long long)p % (p_19 + 845ULL)) + 903ULL));
  if (- (18446744073709515831ULL + (unsigned long long)-1.14764752564e+38) > (unsigned long long)(
      (long long)(~ v_13) / 190961812LL ^ 43099LL)) result = 18446744073249016624ULL;
  else {
    v_4 = (long)((unsigned long)(- ((int)((char)v_9) * (int)p_7)) * (
                 - p_11 / 1005804444UL));
    v = (long long)(v_4 / (long)(- ((int)((char)p) / ((int)p_7 + 571)) + 65));
    result = (unsigned long long)(- (! v) * 976LL);
  }
  return result;
}


