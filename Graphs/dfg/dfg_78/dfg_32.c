#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732886288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned long p_5, unsigned char p_9, short p_11,
          unsigned char p_15)
{
  unsigned int v_13;
  short v_7;
  int v;
  short result;
  v_13 = (unsigned int)p_15;
  v_7 = (short)22598;
  result = (short)-26756;
  v = (int)(((unsigned long)result | ((unsigned long)p ^ p_5) / (unsigned long)(
                                     ((int)v_7 - (int)p_9) + 752)) / (unsigned long)(
            (unsigned int)(~ (- p_11)) % ((- v_13 - (unsigned int)((int)p_15 >> 1LL)) + 209U) + 694U));
  result = (short)(~ p * 4294967217U - (unsigned int)(-6 | v));
  result = ! result;
  result = result;
  return result;
}


