#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1014111188
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, float p_5, double p_7, long p_13)
{
  float v_11;
  int v_9;
  float v;
  int result;
  v_11 = 128.138397217f;
  result = (int)p_13;
  result = result;
  v_9 = (int)p_13;
  v = (float)((unsigned int)((int)((double)(p - p_5) / (- p_7 + 653.)) - result) + 
              (unsigned int)((int)(p * 122.f)) * (((unsigned int)v_9 * 3932052114U) / (
                                                  (unsigned int)(- v_11) + 946U)));
  result = (int)v;
  return result;
}


