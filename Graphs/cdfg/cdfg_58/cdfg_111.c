#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 584600852
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p[4][5][5], unsigned int p_5, long p_9)
{
  unsigned short v_11;
  unsigned long long v_7;
  unsigned long v;
  short result;
  v_11 = (unsigned short)p_9;
  v_7 = (unsigned long long)p_9;
  v = (unsigned long)p[0][3][4];
  if (- ((unsigned long long)(v + (unsigned long)p_5) * (v_7 % 152ULL)) >= (unsigned long long)(
      (unsigned long)((p_9 + (long)v_11) - 88L) / (unsigned long)(p_5 + 488U))) 
    result = (short)((unsigned int)p[1][2][1] - 32565U);
  else result = (short)-36;
  result = (short)(! (3661742795UL - (unsigned long)result));
  return result;
}


