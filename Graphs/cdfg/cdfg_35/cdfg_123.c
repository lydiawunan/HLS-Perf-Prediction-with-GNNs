#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1070057130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p)
{
  unsigned int v_9;
  unsigned char v_7;
  signed char v_4;
  float v;
  signed char result;
  v_9 = 46841U;
  v_7 = (unsigned char)p;
  v_4 = (signed char)p;
  v = (float)((unsigned long)(-405942160 & ((int)p + (int)v_4)) - ((unsigned long)(
                                                                   585810486U - (unsigned int)v_7) - (
                                                                   (unsigned long)v_9 - 4294960553UL)));
  result = (signed char)((long)((int)v / ((int)v_4 % ((int)p + 145) + 121)));
  return result;
}


