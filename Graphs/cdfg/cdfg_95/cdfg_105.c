#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944009175
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned int p_5, long p_7[3][3][1],
                 unsigned long p_13[1][2][4], unsigned char p_19)
{
  int v_23;
  char v_21;
  double v_17;
  unsigned long v_15;
  unsigned char v_11;
  double v_9;
  float v;
  unsigned int result;
  v_23 = (int)p_5;
  v_21 = (char)-83;
  v_11 = (unsigned char)164;
  v_17 = (double)(-750070079ULL);
  if (312081911UL / (p_13[0][1][1] * (unsigned long)(- v_21) + 266UL) >= (unsigned long)(~ (~ (! v_23)))) {
    v = (float)p_5;
    result = (unsigned int)(((int)p >> 2UL) % (((int)((unsigned short)v) >> (
                                                (int)p & 15)) % -4692 + 765));
  }
  else {
    v_15 = (unsigned long)v_17 - p_13[0][0][3] * (unsigned long)(- p_19);
    v_9 = (double)(~ v_15);
    result = (unsigned int)(((double)(91L * p_7[1][1][0]) * (v_9 * -506600249.)) * (double)(
                            (unsigned long)v_11 + (p_13[0][1][2] - v_15)));
  }
  return result;
}


