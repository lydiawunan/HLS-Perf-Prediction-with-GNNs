#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 874576493
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, long p_5, unsigned long long p_13, int p_21,
           unsigned int p_23)
{
  unsigned short v_25;
  unsigned char v_19;
  float v_17;
  long long v_15;
  unsigned char v_11;
  unsigned char v_9;
  int v_7;
  long v;
  double result;
  v_25 = (unsigned short)18430;
  v_17 = 2.47703592239e+38f;
  v_15 = (long long)p_21;
  v_11 = (unsigned char)p_23;
  v_9 = (unsigned char)p_13;
  v = 8524L;
  if (- (((long long)v_25 - -757322938LL) / (long long)(! p_5 + 140L)) == (long long)p_5) {
    v_7 = (int)((v_15 + (long long)v_9) % ((long long)-5.54525198428e+36f + 941LL) - (long long)(
                v_17 * 46278.f));
    v_9 = (unsigned char)(((unsigned long long)((int)v_9 & (int)v_11) - p_13) % (unsigned long long)(
                          (111593699LL / (long long)(v_7 + 925)) / 4294964735LL + 540LL));
    result = (double)((((long)p & v) & p_5 % 60L) & ((long)v_7 * p_5) % (long)(
                                                    (int)v_9 / -90 + 131));
  }
  else {
    v_19 = (unsigned char)(2.5433813283e+37 - (double)((unsigned int)p_21 + ! p_23));
    result = (double)v_19;
  }
  return result;
}


