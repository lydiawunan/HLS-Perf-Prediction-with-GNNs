#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 166966481
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p[4][4][3], char p_5[4][3][4], short p_15, short p_17,
          int p_19)
{
  unsigned int v_23;
  unsigned int v_21;
  unsigned long long v_13;
  unsigned int v_11;
  unsigned long v_9;
  unsigned char v_7;
  long long v;
  float result;
  v_23 = (unsigned int)p_15;
  v_21 = 7916U;
  if (! ((unsigned int)p_15 - v_21 * v_23) > 133U) {
    result = (float)p_5[3][2][0];
    v = (long long)result / (((long long)((long)p_17 % 41602L) + -705373203LL) + 526LL);
    v_7 = (unsigned char)p_15;
  }
  else {
    result = (-11967.6650391f * (float)((int)p_5[3][1][3] * (int)p_17)) * (float)(
             155 / (p_19 + 77) + p_19);
    v = (long long)p[2][2][0];
    v_7 = (unsigned char)p_5[2][2][0];
  }
  if (v >= (long long)v_7) {
    v_9 = (unsigned long)(result + 526.17980957f);
    v = (long long)((unsigned long)p_5[2][2][3] % (((unsigned long)v_7 - v_9) + 786UL));
    result = (float)(! (! (v | (long long)p[0][0][1])));
  }
  else {
    v_13 = (unsigned long long)v_7;
    v_11 = (unsigned int)v_13;
    result = (float)v_11;
  }
  return result;
}


