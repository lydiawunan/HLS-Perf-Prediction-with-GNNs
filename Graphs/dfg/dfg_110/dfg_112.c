#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 125545609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p[3][5], unsigned long p_9)
{
  unsigned int v_7;
  short v_4;
  signed char v;
  signed char result;
  v_7 = (unsigned int)p_9;
  v_4 = (short)v_7;
  v = (signed char)(! (~ ((int)v_4 % ((int)p[1][3] + 192))) % 24405);
  result = ~ v;
  return result;
}


