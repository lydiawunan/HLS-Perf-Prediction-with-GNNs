#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736343552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long long p_9,
                unsigned int p_13, float p_15, int p_19)
{
  int v_23;
  unsigned short v_21;
  long v_17;
  double v_11;
  int v_7;
  long long v_5;
  float v;
  signed char result;
  v_23 = (int)p_13;
  v_21 = (unsigned short)p_19;
  v_7 = -17029;
  v_5 = (long long)v_21 * (-541133589LL / (long long)((v_23 + (int)p_15) + 169));
  if (- p_9 >= - (! ((unsigned long long)v_5 / (p_9 + 368ULL)))) {
    v_7 = (int)((! p + ((unsigned long long)2.39037150989e+38 - 18446744073709514708ULL)) - p_9);
    v = (float)(p | ((unsigned long long)v_5 * p) * (unsigned long long)v_7);
    result = (signed char)(- (66118279ULL - p) / ((unsigned long long)(
                                                  - v - 3960415232.f) + 1024ULL));
  }
  else {
    v_17 = (long)(- (- p_19 - 64536));
    v_11 = (double)(((float)p_13 * p_15) * 209912224.f + (float)v_17);
    result = (signed char)((- v_11 + 545702090.) / ((double)(~ v_7) + 167.));
  }
  return result;
}


