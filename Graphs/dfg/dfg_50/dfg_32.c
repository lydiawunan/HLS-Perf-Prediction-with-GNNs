#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 518509146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, signed char p_4, short p_6, float p_11[3][3][2],
          char p_13)
{
  unsigned char v_15;
  unsigned int v_9;
  float v;
  float result;
  v_15 = (unsigned char)p_4;
  v_9 = 50607U;
  result = (float)(- p_6);
  v = result * (float)(- ((int)p_13 / ((int)v_15 + 44)));
  v_9 = (unsigned int)((float)(0 ^ (unsigned long long)v_9) - - (- p_11[0][2][0] - 8882.f));
  result = (float)(p + (unsigned int)((float)((int)p_4 * (int)p_6) + - v) % (
                       (v_9 / 632617972U) % 21U + 331U));
  return result;
}


