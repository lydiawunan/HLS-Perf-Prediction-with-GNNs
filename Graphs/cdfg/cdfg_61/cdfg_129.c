#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 206883528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p[4][3], double p_5, float p_9, unsigned long p_15,
         unsigned int p_17)
{
  unsigned short v_29;
  long v_27;
  unsigned long v_25;
  double v_23;
  char v_21;
  signed char v_19;
  long long v_13;
  unsigned long v_11;
  float v_7;
  signed char v;
  long result;
  v_29 = (unsigned short)8479;
  v_27 = -872245694L;
  v_25 = (unsigned long)p_9;
  v_21 = (char)p_5;
  v_13 = (long long)p[1][0];
  if ((long)((double)((float)(~ p_17) * (p_9 - (float)v_27)) - (-17881. * p_5) / (
                                                               (double)(
                                                               3496474575UL + p_15) + 1021.)) < ! (
      (long)v_29 - ~ p[0][0])) {
    v_11 = (unsigned long)(p_9 * (float)((v_13 + (long long)p_15) - (long long)(- p_17)));
    v_7 = (float)((! v_11 % 259UL) / ((unsigned long)2.61027005695e+38f + 772UL));
    v = (signed char)(- ((long long)p_5 % -408081052LL) * (long long)(
                      - v_7 - p_9));
  }
  else {
    v_23 = (double)(~ ((unsigned long long)v_25 * ((unsigned long long)v_21 - 13764ULL)));
    v_19 = (signed char)((unsigned long)(((int)v_21 ^ (int)((char)p_5)) / (
                                         (int)((double)p_9 - v_23) + 486)) / (
                         p_15 + 770UL));
    v = v_19;
  }
  result = - ((long)((double)v - -3129588453.24) / (~ p[1][0] + 542L));
  return result;
}


