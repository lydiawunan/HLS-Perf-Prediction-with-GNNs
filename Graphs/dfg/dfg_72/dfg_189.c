#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 48862753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long long p, unsigned long p_5, char p_7, int p_9[4],
          short p_13)
{
  short v_17;
  unsigned int v_15;
  short v_11;
  unsigned char v;
  float result;
  v_15 = 14742U;
  v_17 = (short)(- p_5);
  v_11 = (short)((228LL / (((long long)v_15 - 61749LL) + 885LL)) % (long long)(
                 (1385447936UL + (unsigned long)((int)v_17 << ((int)((short)-1.32582612863e+38f) & 15))) + 23UL) + 420023098LL);
  v = (unsigned char)(~ (- p_5 ^ p_5 * (unsigned long)p_7) * ((unsigned long)(~ p_9[3]) * 3967256762UL + (unsigned long)(
                                                              42 * (int)v_11 + (
                                                              (int)p_13 + (int)p_7))));
  result = (float)((unsigned long long)v - p);
  return result;
}


