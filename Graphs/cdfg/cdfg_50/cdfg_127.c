#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 344729090
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[2], long long p_7,
                unsigned long long p_9, int p_11, int p_13[3][3][5])
{
  unsigned long v_15;
  unsigned long v_5;
  double v;
  signed char result;
  v_15 = (unsigned long)p_11;
  v_5 = (unsigned long)p_13[0][1][1];
  v = (double)0UL;
  if (~ (((unsigned long long)v % (p[1] + 602ULL)) / (unsigned long long)(
         (p_13[2][2][3] - -70) + 480)) >= (unsigned long long)(- v_5 | (unsigned long)(
                                                               (p_13[1][1][2] + p_11) % (
                                                               ~ p_13[0][0][0] + 107)))) {
    v = (double)(! ((unsigned long long)(p_7 + 255LL) / (p_9 + 349ULL)));
    v_5 = 48467UL;
    result = (signed char)(((unsigned long long)(v + -38771.) + p[0] % (unsigned long long)(
                                                                v_5 + 775UL)) / 3441994373ULL);
  }
  else result = (signed char)p_11;
  return result;
}


