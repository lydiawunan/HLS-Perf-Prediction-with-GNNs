#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264393146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, long p_5[3][2][1], float p_13[3][3],
                signed char p_17[5][2][5])
{
  short v_19;
  float v_15;
  float v_11;
  long v_9;
  unsigned short v_7;
  int v;
  signed char result;
  v_19 = (short)p_5[2][0][0];
  v_15 = -3.33493438778e+38f;
  v_11 = (float)p_17[3][0][4];
  v_9 = p_5[0][0][0];
  v_7 = (unsigned short)31963;
  v = 22903;
  result = (signed char)p;
  while (- (-7125853083.29 + (double)(p_5[1][0][0] % (long)((int)v_7 + 764))) < (double)v_9) {
    v = (int)((float)(((int)((signed char)v_11) ^ (int)p_17[3][0][3]) % (
                      (int)(- p_13[1][1]) + 102)) + v_15);
    v_7 = (unsigned short)((float)((unsigned long)(p & 23881U) % (unsigned long)(
                                   v_9 * (long)v_15 + 199L)) / (((float)p_17[2][1][4] + -766.97869873f) / (
                                                                (float)(
                                                                (int)v_7 * (int)v_19) + 222.f) + 887.f));
    v_9 = (long)(9374044592.81 + (double)(6873.f / ((94.f - p_13[2][1]) + 947.f)));
  }
  while_0_break: ;
  result = (signed char)(p * (unsigned int)(- ((int)result ^ v)));
  return result;
}


