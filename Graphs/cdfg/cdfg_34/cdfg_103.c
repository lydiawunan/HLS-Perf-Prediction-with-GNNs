#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1023407251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, unsigned short p_4, signed char p_6, float p_13[3][5],
              unsigned int p_15)
{
  double v_21;
  int v_19;
  float v_17;
  float v_11;
  double v_9;
  float v;
  long long result;
  v_21 = 9405930908.39;
  v_19 = (int)p_13[0][4];
  v_11 = 556.228820801f;
  v_9 = 77.4224490977;
  v = (float)p;
  result = (long long)p_13[0][1];
  while ((unsigned int)((int)(((double)v + v_9) / ((double)(~ result) + 720.)) - v_19) > 3716866290U) {
    v_19 = (int)((unsigned int)v_11 / (- p_15 + 207U));
    v = (- p_13[2][1] * p_13[1][3]) * (float)(((unsigned int)v_21 - p_15) % (
                                              (27841U - p_15) + 689U));
    v_9 = (double)(~ (3895053331LL - ((long long)v_11 >> 15LL)));
  }
  while_0_break: ;
  while (45037 + ~ (! p) > - (((int)p_4 - p) / (((int)p_6 - (int)((signed char)v)) + 508))) {
    v_17 = (double)v_11 * (v_9 * 45438.);
    v_11 = - v_17;
    v_11 = (float)(p_15 * (unsigned int)(v_11 * (float)((long long)p_4 % (
                                                        result + 523LL))));
    v = (float)p - p_13[2][1];
  }
  while_0_break_0: ;
  return result;
}


