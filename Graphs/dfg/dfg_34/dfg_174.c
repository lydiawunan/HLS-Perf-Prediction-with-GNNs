#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 786327616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, short p_9, long long p_11, unsigned int p_15)
{
  unsigned short v_17;
  float v_13;
  int v_7;
  long long v_5;
  unsigned long v;
  long long result;
  v_17 = (unsigned short)28664;
  v_13 = (float)p_11;
  v_7 = (int)((unsigned int)((float)(75LL - p_11) + v_13) % ((p_15 + (unsigned int)(
                                                              ((int)p_9 * (int)v_17) * (int)(- p))) + 263U));
  v = (unsigned long)p_9;
  v_5 = (long long)v_7;
  result = (long long)(- ((float)v + - (p * (float)v_5)));
  return result;
}


