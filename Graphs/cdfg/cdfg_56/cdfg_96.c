#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036041188
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[3], unsigned int p_5, short p_13, int p_17)
{
  unsigned long long v_15;
  signed char v_11;
  unsigned long long v_9;
  unsigned int v_7;
  char v;
  float result;
  v_15 = 16224ULL;
  v_11 = (signed char)86;
  v_9 = (unsigned long long)p_17;
  v = (char)78;
  result = -2.81541932843e+38f;
  v_7 = (unsigned int)(- (- result) * -56.f);
  if (1418149484ULL % (! v_15 + 380ULL) + (v_15 * 18446744073709521266ULL) * (
                                          18446744073368152855ULL * (unsigned long long)v) >= (unsigned long long)p_17) {
    v = (char)(25737UL + (unsigned long)(~ (- v_7)));
    result = (float)(! p_5);
    result = (float)((((unsigned int)p[1] % 4217928482U) * (unsigned int)result) % (
                     (unsigned int)(- (1.70687165645e+38f + (float)v)) + 20U));
  }
  else {
    v = (char)(- (- ((int)p_13 + (int)p[1])));
    v_9 = ((unsigned long long)v_11 - v_9) << ((int)v & 63);
    result = (float)v_9;
  }
  return result;
}


