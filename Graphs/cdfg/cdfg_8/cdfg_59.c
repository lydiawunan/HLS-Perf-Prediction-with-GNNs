#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 814924019
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned long p_4, long p_7, unsigned int p_9, float p_11)
{
  double v_21;
  long long v_19;
  unsigned int v_17;
  char v_15;
  unsigned long long v_13;
  int v;
  float result;
  v_21 = (double)p_4;
  v_19 = -692766306LL;
  v_15 = (char)p;
  if ((double)(- ((float)(p_4 * 43UL) / -2.11936252505e+38f)) >= v_21) {
    v_13 = (unsigned long long)(0.745672702789f + (float)p);
    v = (int)((float)(p_9 - 4294947556U) * (p_11 * p_11) - (float)v_13);
    result = (float)((unsigned long long)((unsigned long)-46.7118427465 * (
                                          p_4 - (unsigned long)v)) / (
                     ((unsigned long long)v & ((unsigned long long)p_7 + 18446744072870522343ULL)) + 82ULL));
  }
  else {
    v_17 = (unsigned int)(37658LL % (v_19 + 421LL));
    v_15 = (char)((unsigned int)v_15 / (v_17 + 920U));
    result = (float)(18446744073525829810ULL + (unsigned long long)(! (
                     (unsigned int)v_15 ^ p_9)));
  }
  result = (float)p - result;
  return result;
}


