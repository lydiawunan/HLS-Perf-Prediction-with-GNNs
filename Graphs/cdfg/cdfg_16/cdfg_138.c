#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 278370410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p[3], unsigned int p_5[4][1][4], int p_13, short p_17)
{
  unsigned int v_15;
  unsigned int v_11;
  unsigned int v_9;
  double v_7;
  int v;
  int result;
  v_11 = (unsigned int)p[0];
  v_9 = p_5[3][0][2];
  v_7 = 881.427302333;
  v = -445644696;
  result = p_13;
  if ((unsigned int)p_17 < ! (v_11 / 265304831U)) {
    v_11 = ! ((unsigned int)v % (p_5[3][0][1] + 746U)) % (unsigned int)(
           p_13 + 357);
    v_7 = (double)(- v_11);
    v_11 = p_5[0][0][0];
  }
  else {
    v_11 = ((unsigned int)(- v_7) % (p_5[0][0][3] + 856U)) % (- p_5[2][0][0] + 645U);
    v_15 = 310026901U;
    v_9 = ! ((unsigned int)(- p[0]) - - v_15);
  }
  while ((long long)v < - ((-703789378LL ^ (long long)p[2]) - (long long)(
                           p_5[0][0][2] + 2U))) {
    v_7 = v_11 * (v_9 * (unsigned int)((int)v_7 | 749462675));
    v_9 = (unsigned int)(- p_13);
    result = (int)(-18053UL);
    v = (int)((! p_5[2][0][0] * ((unsigned int)p[0] * p_5[1][0][2])) * 20604U);
  }
  while_0_break: ;
  return result;
}


