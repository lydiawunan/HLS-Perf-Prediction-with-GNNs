#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984659575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p[2][3][3], double p_5, double p_9,
                unsigned short p_11[5], unsigned char p_13)
{
  signed char v_17;
  unsigned long v_15;
  int v_7;
  double v;
  signed char result;
  v_17 = (signed char)p_11[3];
  v_15 = 3487274819UL;
  v_7 = (int)((unsigned long)((double)((int)p_11[3] + -66) + - ((double)p_13 * p_9)) * (
              0UL % ((((unsigned long)p_13 + v_15) - (unsigned long)v_17) + 654UL)));
  v = (double)((unsigned long)((double)p[0][2][0] * - (- p_5)) + (4294934679UL - (
                                                                  4294934604UL % (unsigned long)(
                                                                  v_7 + 531) ^ (unsigned long)(
                                                                  -44177 & (int)p_9))));
  result = (signed char)v;
  result = (signed char)(- ((int)(~ result) + (int)(! (! result))));
  return result;
}


