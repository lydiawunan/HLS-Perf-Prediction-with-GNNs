#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 320746431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p[4][3][1], unsigned long long p_4[1][4][2],
                  unsigned int p_6, unsigned int p_8, double p_11)
{
  signed char v_13;
  float v;
  unsigned long result;
  v_13 = (signed char)p_4[0][0][1];
  v = (float)(p_11 - (double)((542498682UL - (unsigned long)p[1][1][0]) * (unsigned long)(
                              p_8 + (unsigned int)v_13)));
  result = (unsigned long)((double)((float)p[1][2][0] * 2.48552816729e+38f + (float)(
                                    p_4[0][3][0] % (unsigned long long)(
                                    p_6 + 852U))) - ((double)p_8 / -270.337278336 + (double)(
                                                     v + v)));
  return result;
}


