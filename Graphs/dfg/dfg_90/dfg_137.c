#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 989359627
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p)
{
  unsigned int v_11;
  unsigned long long v_9;
  signed char v_7;
  signed char v_5;
  double v;
  float result;
  v_11 = 3250064080U;
  v_9 = (unsigned long long)p;
  v_7 = (signed char)p;
  result = -1.92341680258e+38f;
  v_5 = (signed char)(! ((unsigned long long)(- v_7) / (v_9 * (unsigned long long)v_11 + 261ULL)) >> (
                      (int)v_7 & 63));
  v = (double)(- (~ ((long)v_5 * (-548904663L % (long)((int)v_5 + 327)))));
  v = (double)(- (- result)) + - (- v) * (double)(p + (int)4294950656.f);
  result = (float)(- v + v);
  return result;
}


