#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 185889651
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p[4][2], unsigned int p_5, long long p_9,
                   unsigned long p_13[3][5][3], char p_15)
{
  unsigned int v_11;
  short v_7;
  unsigned short v;
  unsigned short result;
  v_11 = 394771882U;
  v_7 = (short)p[1][1];
  result = (unsigned short)p_15;
  v = (unsigned short)63909;
  while ((long long)((unsigned int)(((int)v - (int)((unsigned short)p[0][0])) * (int)(
                                    (double)p_5 * p[0][1])) + - p_5) <= 
         (long long)(34 / ((int)v_7 + 726)) + - (p_9 << 38)) {
    v = v_11 * 4209062776U;
    v_11 = (unsigned int)(- ((long long)((int)p_15 * (int)v_7) + 375783818LL));
    result = (unsigned short)(201167093UL + (unsigned long)(- p[3][0]));
    v_7 = (short)p_13[0][3][2];
  }
  while_0_break: ;
  return result;
}


