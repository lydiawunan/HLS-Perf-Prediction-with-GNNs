#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156828998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, signed char p_9[3][1][3])
{
  int v_7;
  unsigned int v_4;
  int v;
  float result;
  v_7 = -1018453221;
  v = -7331;
  v_4 = (unsigned int)(! v_7);
  v_7 = (int)((long long)(! p_9[0][0][0]) - ((-24784LL + (long long)p) % 23LL - (long long)(
                                             (int)p_9[0][0][0] / ((int)p_9[1][0][1] + 953) - v_7)));
  result = (float)(~ (~ (-447LL * (long long)v) - (long long)(v_4 % (unsigned int)(
                                                              (int)p + 161) - (unsigned int)v_7)));
  return result;
}


