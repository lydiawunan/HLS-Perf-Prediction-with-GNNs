#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 623499671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, int p_4, signed char p_13)
{
  double v_11;
  float v_9;
  char v_7;
  long v;
  float result;
  v_9 = -9529859072.f;
  v_7 = (char)35;
  v_11 = (double)((int)p_13 + 2);
  result = (float)v_11;
  v = (long)(~ ((unsigned int)((int)v_7 * 17950) * 165900452U) - (unsigned int)(
             (int)((short)(- v_9)) / 272));
  result /= (float)((unsigned long)p * (unsigned long)(((long)p_4 | 1022317630L) + (
                                                       v + (long)p_4))) + 598.f;
  return result;
}


