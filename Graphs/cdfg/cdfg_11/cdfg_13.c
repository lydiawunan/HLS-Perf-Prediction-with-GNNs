#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 500042509
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[2][3][5], long p_5, double p_9, unsigned char p_13,
         unsigned long p_15)
{
  unsigned short v_21;
  double v_19;
  long long v_17;
  unsigned int v_11;
  unsigned short v_7;
  float v;
  char result;
  v_19 = (double)p_15;
  v_17 = -281938644LL;
  v_11 = 26787U;
  v = 858.505187988f;
  v_21 = (unsigned short)(- ((long long)(- p_13) + - v_17));
  if ((unsigned long)(- ((float)p_15 + v) + (float)(v_17 * (long long)(- p_9))) >= 
      ((unsigned long)((double)p_13 + v_19) * ((unsigned long)v_21 - p_15)) / (unsigned long)(
      4294925608U % (v_11 + 35U) + 685U)) {
    v_7 = (unsigned short)((double)((int)((unsigned short)p_9) / 23065 >> (
                                    (int)-2.0721855896e+37f & 31)) / (
                           (- p_9 + (double)(63U - v_11)) + 550.));
    v = (float)(- (p_5 << ((int)v_7 & 31)) % 121L);
    result = (char)(- (- v + (-7369.f + p[1][0][0])));
  }
  else result = (char)-30;
  return result;
}


