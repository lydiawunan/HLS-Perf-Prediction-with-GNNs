#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003733313
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[2][3][2], unsigned long p_4)
{
  short v_7;
  char v;
  unsigned long result;
  v = (char)p[0][0][1];
  v_7 = (short)(~ (0UL ^ p_4));
  if ((int)((short)(235.652816772f - (float)(- ((int)v | (int)v_7)))) < (int)v_7) 
    result = (unsigned long)p[0][1][0] | p_4;
  else result = 4280756133UL;
  return result;
}


