#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 32118428
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned char p_5, unsigned long p_9, float p_11,
          float p_13)
{
  short v_15;
  int v_7;
  short v;
  float result;
  v_15 = (short)p_5;
  if ((double)v_15 - (-6415837485.04 / (double)(p_13 + 921.f)) / 702. >= (double)(
      18446744072785252858ULL % (unsigned long long)((int)p_5 + 84))) {
    v_7 = (int)(- (- p_9) * (unsigned long)(- (- p_11)));
    v = (short)((unsigned int)2.42033342446e+38 - ~ ((unsigned int)-1.65524951671e+38 - 314351654U));
  }
  else {
    v_7 = (int)(14390ULL % (! (18446744073709532444ULL ^ (unsigned long long)p_5) + 263ULL));
    v = (short)p_13;
  }
  result = (float)(- (18446744073709547619ULL * (unsigned long long)v) + (unsigned long long)(
                   (p * (unsigned long)p_5) % (unsigned long)(v_7 + 510)));
  return result;
}


