#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 660042136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[5][1], unsigned short p_9[3], signed char p_11)
{
  float v_7;
  unsigned int v_4;
  int v;
  short result;
  v_4 = 33220U;
  v_7 = (float)((int)p_9[0] - ~ (1 / ((int)(- p_11) + 446)));
  v = (int)((unsigned long long)(- (((unsigned long)v_4 / (p[0][0] + 578UL)) * - p[0][0])) + 
            (unsigned long long)v_7 / (18446744073709511262ULL / (unsigned long long)(
                                       - p[3][0] + 173UL) + 707ULL));
  result = (short)(443.825680291 * (double)v);
  return result;
}


