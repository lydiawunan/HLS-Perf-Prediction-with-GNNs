#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421042708
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[5], unsigned long p_7)
{
  unsigned long v_11;
  unsigned int v_9;
  double v_4;
  short v;
  short result;
  v_11 = (unsigned long)p[1];
  v_9 = 4294963248U;
  v_4 = 6.61934604804e+37;
  v = (short)p_7;
  result = (short)(~ (! (p_7 - (unsigned long)p[2])) * (((unsigned long)(~ v_9) * v_11) * (unsigned long)v_4));
  v_4 = (double)p[1];
  result = (short)(~ (115 + ((int)v - (int)((short)v_4))) * - (((int)result + (int)p[1]) + 62934));
  result = result;
  return result;
}


