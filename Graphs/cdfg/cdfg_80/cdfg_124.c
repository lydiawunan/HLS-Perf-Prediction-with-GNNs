#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 544368555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p[1], double p_4, unsigned int p_6, double p_9,
         unsigned char p_11[5][4])
{
  float v_21;
  char v_19;
  unsigned short v_17;
  unsigned char v_15;
  float v_13;
  unsigned long long v;
  long result;
  v_21 = (float)p_6;
  v_19 = (char)-33;
  v_17 = (unsigned short)14742;
  v_15 = (unsigned char)189;
  v_13 = -888.063110352f;
  v = 397229730ULL;
  while ((int)(((p_9 + (double)p_11[0][1]) / 21714.) * (double)(- (- v_13))) <= 
         (int)(((float)v_15 + -362.337524414f) / ((float)p_11[3][0] + 502.f)) / (
         (int)v_17 % 128 + 294)) {
    v_13 = (long long)v_19 % -807860997LL;
    v_15 = (unsigned char)((double)v_21 - (p_9 * p_9 + (double)p_11[4][3] / (
                                                       p_9 + 724.)));
    v_19 = (char)p[0];
    v_17 = (unsigned short)p_6;
  }
  while_0_break: ;
  result = (long)((unsigned int)(((int)p[0] * (int)((unsigned char)p_4)) * (int)p[0]) + (
                  p_6 - (unsigned int)((float)v / 1067731264.f)));
  return result;
}


