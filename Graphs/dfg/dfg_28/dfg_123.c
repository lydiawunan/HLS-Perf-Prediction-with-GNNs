#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 66765709
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, long long p_9, unsigned int p_11[3], unsigned long p_13,
          char p_17[1])
{
  float v_19;
  char v_15;
  int v_7;
  char v_5;
  unsigned char v;
  short result;
  v_19 = 176.335479736f;
  v_15 = (char)p_11[1];
  v_7 = (int)((float)(- (! ((int)v_15 / ((int)p_17[0] + 352)))) + - (- (
              -733153792.f + v_19)));
  v_5 = (char)p_13;
  v = (unsigned char)((unsigned long long)((int)(- p + (float)(- v_5)) - (
                                           v_7 / -784 + (int)(p + (float)p_9))) * (
                      (unsigned long long)((unsigned int)v_5 * p_11[2]) + 1ULL));
  result = (short)(849.944152832f * (float)v);
  return result;
}


