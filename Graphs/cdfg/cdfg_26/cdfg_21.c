#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 616999045
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[4][3][3], double p_5, unsigned int p_7,
                   long long p_11, double p_13)
{
  unsigned int v_15;
  unsigned long v_9;
  unsigned short v;
  unsigned short result;
  v_15 = (unsigned int)p_11;
  result = (unsigned short)13822;
  if (56U + ((unsigned int)(! p[1][1][1]) & (4294952070U + v_15)) >= (unsigned int)(
      p_13 / ((double)((unsigned long)(! p[2][1][2]) + 4294903623UL / (unsigned long)(
                                                       (int)result + 316)) + 831.))) 
    v = (unsigned short)(- p_5 - (double)(0U % ((p_7 - 4294967262U) + 893U)));
  else {
    v_9 = (unsigned long)p_13;
    v = (unsigned short)(! v_9 >> (- (p_11 & (long long)v_9) & 31LL));
  }
  result = (unsigned short)(((unsigned long)v * 3760875367UL ^ 4294967185UL) | (unsigned long)(! p[1][1][1]));
  return result;
}


