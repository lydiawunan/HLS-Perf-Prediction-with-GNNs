#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 138040100
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, long p_7, signed char p_11, float p_13,
                  signed char p_15)
{
  unsigned char v_9;
  char v_4;
  unsigned char v;
  unsigned long result;
  v_9 = (unsigned char)p_13;
  result = (unsigned long)p_15;
  v_4 = (char)p_15;
  v = (unsigned char)p_11;
  v = (unsigned char)((float)v_4 * ((float)(225 % ((int)v + 64)) * (p + (float)p_7)) - (float)((long long)(
                      (int)v_9 + (int)p_11 % ((int)((signed char)p_13) + 867))));
  result /= 33001UL / (unsigned long)(- ((int)((unsigned char)983.409073152) * (int)v) + 373) + 144UL;
  return result;
}


