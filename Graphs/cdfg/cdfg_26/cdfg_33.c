#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992251198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned long long p_5[1][2], int p_9, signed char p_11,
          short p_15)
{
  short v_25;
  char v_23;
  float v_21;
  unsigned char v_19;
  float v_17;
  unsigned long long v_13;
  int v_7;
  unsigned long long v;
  float result;
  v_25 = (short)-22159;
  v_23 = (char)p;
  v_17 = 930.996765137f;
  v_7 = (int)p_11;
  if ((float)(v_7 & (int)(! v_25)) + -2.31493789072e+38f >= 0.f) {
    v_13 = (unsigned long long)((int)p_11 / -24321);
    v_7 = (int)((unsigned long long)(- (-1.8565615184e+37f - (float)p_11)) + (
                (v_13 - 8493ULL) - (unsigned long long)(- p_15)));
    v = (unsigned long long)v_7 | (- p_5[0][0] + ((unsigned long long)p_9 + 18446744073466158680ULL));
  }
  else {
    v_21 = (float)(p_9 * ((int)(! v_23) & (p_9 + (int)p_11)));
    v_19 = (unsigned char)(- v_21);
    v = (unsigned long long)((int)(- (2.80399723224e+38 * (double)v_17)) / (
                             - (p_9 / ((int)v_19 + 454)) + 994));
  }
  if (! ((unsigned long long)p / (v + 1019ULL)) == ! p_5[0][1] % 90ULL + (
                                                   18446744073709540303ULL & (
                                                   v + 39274ULL))) result = (float)(signed char)57;
  else result = (float)(unsigned char)139;
  return result;
}


