#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 850204776
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, long p_4, short p_6[5],
                  signed char p_9[2][1], unsigned long long p_13)
{
  float v_11;
  double v;
  unsigned char result;
  v_11 = (float)p_13;
  v = -5064513186.67;
  result = (unsigned char)v;
  while ((unsigned long)(~ (((int)p | 49557) >> (p_4 % (long)((int)p_6[2] + 306) & 31L))) < 
         4269645573UL / (unsigned long)(- p_4 + 48L) << ((unsigned long)(
                                                         v + (double)(
                                                         (int)p_9[0][0] + 109)) & 31UL)) {
    v_11 -= -360.371063232f;
    result = (unsigned char)p_13;
    v = (double)((int)p_9[1][0] & (int)p % 41362);
  }
  while_0_break: ;
  return result;
}


