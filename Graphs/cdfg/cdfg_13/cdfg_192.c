#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 589548262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, double p_7[2][3][1], unsigned int p_9[1][2][5],
           long long p_11, unsigned long long p_15)
{
  float v_17;
  unsigned long v_13;
  unsigned int v_5;
  char v;
  double result;
  v_17 = -2726679808.f;
  v_5 = 801679346U;
  v = (char)14;
  result = -187861090.601;
  v_17 = (float)((unsigned int)v_17 * 3926423300U);
  while (~ ((unsigned long long)(! p) ^ 18446744072870646530ULL) < 0ULL) {
    v_13 = v_5 / 4240585995U;
    v_5 = (unsigned int)(v_17 - (float)v_13);
    v = (char)((unsigned long long)((p_11 / (long long)(p_9[0][0][0] + 985U)) * (long long)(! v_13)) / (
               p_15 % 18446744072905058669ULL + 273ULL));
    result = (double)(4294967192U / (((unsigned int)(3.07214778164e+38 + p_7[1][2][0]) + (
                                      64U - p_9[0][0][4])) + 202U));
  }
  while_0_break: ;
  return result;
}


