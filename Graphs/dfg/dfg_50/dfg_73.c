#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606921200
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, long p_5[2][1], unsigned int p_7,
                 unsigned short p_11[3][2], char p_15)
{
  float v_17;
  short v_13;
  unsigned int v_9;
  float v;
  unsigned int result;
  v_13 = (short)p;
  v_9 = (unsigned int)p_11[2][0];
  v_17 = (float)v_13;
  result = (unsigned int)((float)v_13 - (float)(6759ULL * ((unsigned long long)p_5[0][0] % 18446744073709496341ULL)) / (
                                        (float)((int)p_15 + (int)v_13) * - v_17 + 154.f));
  v = (float)(~ (! (((unsigned long)p_5[1][0] + (unsigned long)p_7) % (unsigned long)(
                    (v_9 + (unsigned int)p_11[1][0]) + 158U))));
  result = (unsigned int)(- ((float)(570U % (result + 496U)) * (v * (float)p) - 2.f));
  return result;
}


