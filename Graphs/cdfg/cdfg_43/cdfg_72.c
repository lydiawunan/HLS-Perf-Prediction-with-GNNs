#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158909940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_5[5], unsigned int p_7,
                  char p_11)
{
  short v_9;
  unsigned int v;
  unsigned char result;
  v_9 = (short)(- p_7);
  if (! ((unsigned long long)(-17 << ((int)v_9 & 7))) <= (unsigned long long)p_11) {
    v = 26U;
    result = (unsigned char)(174U / ((v + 894U) * (unsigned int)((double)p * p_5[1]) + 599U));
  }
  else result = (unsigned char)(~ (4294967187U + - p_7));
  return result;
}


