#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 871575509
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p[1][1], long p_5[3][1],
                 unsigned long long p_7[5][5][4], unsigned long p_11,
                 char p_13)
{
  double v_17;
  unsigned char v_15;
  unsigned long v_9;
  unsigned int v;
  unsigned int result;
  v_17 = 910.283314844;
  v_15 = (unsigned char)140;
  if ((double)(- p_11 + (unsigned long)v_15) * - (- v_17) < (double)p_5[1][0]) 
    v = 0U;
  else {
    v_9 = ~ 3362674993UL;
    v = (unsigned int)(((unsigned long long)(- p_5[0][0]) ^ ~ p_7[2][1][1]) - (unsigned long long)(
                       (4294926903UL - v_9) % ((p_11 | (unsigned long)p_13) + 754UL)));
  }
  result = (unsigned int)(~ ((unsigned long)(~ v) / (p[0][0] + 396UL)));
  return result;
}


