#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 122058301
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p[4][3][3], unsigned char p_5, char p_9, short p_11)
{
  unsigned long long v_15;
  unsigned char v_13;
  double v_7;
  signed char v;
  short result;
  v_15 = 667651370ULL;
  v_13 = (unsigned char)(! v_15);
  v = (signed char)(((unsigned long)(- p_11) / (((4294912456UL & (unsigned long)v_13) & 32622UL) + 218UL)) * (unsigned long)p[1][1][1]);
  v_7 = (double)p_9;
  result = (short)((double)v - 2.50047515058e+38 / ((double)((int)p[0][0][2] >> 11) * (
                                                    (double)p_5 + v_7) + 410.));
  return result;
}


