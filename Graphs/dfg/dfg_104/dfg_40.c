#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347368513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p[1][2], unsigned short p_4, unsigned long long p_11,
         float p_15[4], unsigned long long p_17[4][3][2])
{
  char v_19;
  unsigned int v_13;
  signed char v_9;
  short v_7;
  int v;
  long result;
  v_19 = (char)p[0][1];
  v_13 = 3947245821U;
  v_9 = (signed char)-97;
  v = (int)(p_15[2] * (float)(p_17[0][1][0] * (55383ULL * (unsigned long long)v_19)) + (
            (float)((unsigned long long)((int)p_4 >> ((int)v_9 & 15)) / 129770948ULL) + (
            0.f + 1040606336.f / (p_15[3] + 502.f))));
  v_7 = (short)(~ ((p[0][0] % 109UL) * (unsigned long)((int)v_9 >> (p_11 & 7ULL))) & (unsigned long)(! (- (! v_13))));
  result = (long)(121 % (! (v % ((int)v_7 + 829)) + 754));
  result = (long)((p[0][1] + (unsigned long)(~ (225 | (int)p_4))) + (unsigned long)result);
  return result;
}


