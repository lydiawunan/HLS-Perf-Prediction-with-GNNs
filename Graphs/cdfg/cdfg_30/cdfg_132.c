#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 206561606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long p_11[4][5], long p_13, unsigned int p_17,
          float p_21)
{
  unsigned long long v_23;
  unsigned int v_19;
  int v_15;
  unsigned long v_8;
  long long v_6;
  int v_4;
  unsigned long long v;
  float result;
  v_19 = 3644398894U;
  v_15 = 53588;
  v_8 = (unsigned long)p_11[2][4];
  v_4 = (int)p_17;
  v = (unsigned long long)p_11[3][1];
  result = (float)p;
  if (! v >= 18446744072716051330ULL) {
    v_6 = (long long)v_4;
    v_15 = (int)((long long)(~ (p_11[2][2] - -61L)) / ((long long)(p_13 % (
                                                                   (long)p_21 + 208L)) % (
                                                       (v_6 - (long long)p_17) + 744LL) + 409LL));
    v_8 = (unsigned long)(! v_4);
  }
  else {
    v_6 = (long long)p_17;
    v_23 = (unsigned long long)((float)(451146862L * (long)((double)p_21 - 821.471275191)) + p_21);
    v_19 = (unsigned int)((18446744073709534548ULL & ! v_23) + (unsigned long long)(~ (
                          p + (unsigned long)p_17)));
  }
  if ((long long)v_15 != ((long long)(result + (float)v_6) | -33951LL) % (long long)(
                         ((1U + p_17) | ! v_19) + 47U)) {
    v_4 = (int)(! (v_6 - (long long)v_8) + (long long)(p / (unsigned long)(
                                                       p_11[2][0] * p_13 + 966L)));
    v = (unsigned long long)(~ v_4);
    result = (float)0ULL;
  }
  else result = (float)(~ (700193986LL % (((long long)p - -314033714LL) + 416LL)));
  return result;
}


