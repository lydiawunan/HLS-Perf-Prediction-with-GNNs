#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034555917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, int p_5, signed char p_7, double p_9,
              unsigned char p_13)
{
  float v_17;
  double v_15;
  int v_11;
  char v;
  long long result;
  v_17 = -1.92339266651e+38f;
  v_11 = 555151862;
  v_15 = (double)(~ p);
  if (! (! (-31455 + (int)((short)9240046716.14))) > (int)((float)(((int)p_9 + v_11) * (int)p_13) / (
                                                           (float)(3818964327U / (
                                                                   (unsigned int)v_15 + 742U)) * (
                                                           (float)p_5 * v_17) + 305.f))) {
    v = (char)(! (! (~ p_7)));
    result = (long long)((int)(! v) * ((int)p % (p_5 + 570)));
  }
  else result = 40420497LL;
  return result;
}


