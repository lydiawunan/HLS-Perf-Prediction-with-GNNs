#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 551113869
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, double p_5, float p_7, float p_11,
                  long long p_13[5])
{
  unsigned int v_9;
  unsigned short v;
  unsigned long result;
  v_9 = (unsigned int)p;
  v_9 = (unsigned int)(p_11 * (float)(p_13[2] % 11LL - (long long)(~ v_9)));
  if ((unsigned int)(-426156259 * ~ (153 / ((int)((unsigned char)p_7) + 922))) < v_9) {
    v = (unsigned short)(- -3.12376477505e+38);
    result = (unsigned long)v;
  }
  else result = (unsigned long)((double)p * - (- p_5));
  return result;
}


