#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 433728700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, long p_7, unsigned char p_9, long long p_11,
                  unsigned long p_13)
{
  int v_15;
  int v_4;
  unsigned long long v;
  unsigned char result;
  v_15 = 771743875;
  v = (unsigned long long)(~ ((unsigned long)v_15 % ((4294965031UL + (unsigned long)p) + 307UL)));
  if ((unsigned long long)((long long)(-134L - p_7) + (long long)p_9 / (
                                                      p_11 + 276LL)) - 34468ULL >= - (
      (unsigned long long)(p_13 * (unsigned long)p_7) % (v + 231ULL))) {
    v = (unsigned long long)2.77049257421e+38f;
    result = (unsigned char)(! v);
  }
  else {
    v = (unsigned long long)((-871236262LL / ((long long)p + 2LL) & (long long)(
                              (unsigned long)p_7 + 3872382361UL)) / -1060275869LL);
    v_4 = (int)v;
    result = (unsigned char)(v_4 % ((int)((float)(-3 * (int)((signed char)p)) - -864.002929688f) + 761));
  }
  return result;
}


