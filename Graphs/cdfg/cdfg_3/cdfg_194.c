#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 646100573
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long long p_9, double p_17,
                       unsigned char p_19)
{
  float v_15;
  double v_13;
  char v_11;
  long long v_7;
  float v_5;
  char v;
  unsigned long long result;
  v_15 = 3888809216.f;
  v_13 = -2.50246059913e+38;
  v_11 = (char)7;
  v_7 = -55280LL;
  v_5 = -447.918395996f;
  v = (char)p_19;
  result = (unsigned long long)p;
  while (- ((result % (unsigned long long)((int)p + 304)) % (~ p_9 + 961ULL)) < (unsigned long long)p) {
    v = (char)(((double)p + - p_17) - (double)((v_5 / 895180864.f) / (
                                               (float)(result - (unsigned long long)p_19) + 979.f)));
    v_7 = - ((long long)v_11 % (v_7 + 876LL)) >> ((int)p & 63);
    result = (unsigned long long)((float)p * ((float)(v_7 - 993288027LL) / (
                                              ((float)p - v_15) + 945.f)));
  }
  while_0_break: ;
  while (((double)((int)p & (int)v) - -2.72306240886e+38) / ((double)(
                                                             0ULL - result) + 40.) <= 164.) {
    result = v_7 + (long long)(v_5 + 143725168.f);
    v_7 = (long long)(- ((double)(- v_11) - - v_13));
    v_7 = (long long)(! (! result) + (unsigned long long)(! v_7 + (long long)(- v)));
    result = p_9;
  }
  while_0_break_0: ;
  return result;
}


