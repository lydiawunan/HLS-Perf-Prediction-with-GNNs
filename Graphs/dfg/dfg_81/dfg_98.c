#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985483475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, float p_15, long p_17, long long p_21[1])
{
  long v_23;
  float v_19;
  signed char v_13;
  char v_11;
  long v_8;
  unsigned long long v_6;
  long v_4;
  int v;
  char result;
  v_23 = 37244L;
  v_19 = 6046742528.f;
  v_11 = (char)-112;
  v_8 = (long)p_21[0];
  v_4 = (long)p_21[0];
  v = 687063593;
  v_13 = (signed char)(- ((float)(p_21[0] * 1054868467LL) / (- v_19 + 870.f)) / (
                       p_15 + 614.f));
  v_4 = (long)((long long)v_4 % ((long long)(9703.f / (v_19 + 822.f)) / (
                                 ((long long)3.20003073847e+38 ^ p_21[0]) + 579LL) + 1003LL) - - (
               (long long)p_17 * 963330784LL & (long long)(- v_23)));
  v_6 = (unsigned long long)((! p * (long long)(p_17 * (long)v_11) + 855187722LL) >> (
                             ((486187145ULL + (unsigned long long)(-25631 << (
                                                                   v_8 & 15L))) - (unsigned long long)(
                              ((long)p_15 - -711343423L) & (long)((int)((char)p_15) >> (
                                                                  (int)v_11 & 7)))) & 63ULL));
  result = (char)(((unsigned long long)((long)v | v_4) / ((v_6 + (unsigned long long)v_8) + 160ULL)) * (unsigned long long)(
                  (p << ((int)v_11 & 63)) % (long long)((int)v_13 + 223)) + (unsigned long long)p_15);
  return result;
}


