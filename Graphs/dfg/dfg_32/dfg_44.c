#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 35673226
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, unsigned long long p_4[3][5],
                 unsigned short p_6[5], unsigned int p_9, unsigned int p_13)
{
  unsigned short v_11;
  unsigned int v;
  unsigned int result;
  v = (unsigned int)(! (((p_4[0][0] ^ (unsigned long long)p_6[0]) - (unsigned long long)(! p)) + 1));
  v_11 = (unsigned short)31826;
  result = (unsigned int)(((unsigned long long)(- (897347592UL - (unsigned long)p)) - 
                           (p_4[2][3] ^ 240ULL) * (unsigned long long)(
                           (unsigned int)p_6[3] + v)) * (unsigned long long)(
                          ((unsigned long)(p_9 * (unsigned int)v_11) + 3627011840UL) + (unsigned long)p_13));
  return result;
}


