#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713171592
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, signed char p_4, float p_9, double p_11,
        signed char p_13)
{
  double v_17;
  int v_15;
  unsigned int v_7;
  float v;
  int result;
  v_17 = -7.78714813483e+37;
  v_15 = (int)p_13;
  v = (float)((unsigned long)p_4 * ((p + 4294928145UL) * (unsigned long)(
                                    (double)v_15 / (v_17 + 731.)) ^ (unsigned long)(
                                    (int)p_13 - (int)((signed char)-1725563.5f))));
  v_7 = (unsigned int)(- p_9);
  v_7 &= v_7 % (unsigned int)((int)((signed char)(-188724114. * p_11)) * (int)p_13 + 261);
  result = (int)((float)(! p - (unsigned long)((unsigned int)(~ p_4) * (
                                               (unsigned int)v - v_7))) / (
                 (v + (1.84467440737e+19f - -97.f * p_9)) + 1022.f));
  return result;
}


