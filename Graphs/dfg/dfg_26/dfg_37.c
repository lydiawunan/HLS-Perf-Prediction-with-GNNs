#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 947132928
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p[1][5], unsigned char p_9)
{
  unsigned int v_7;
  short v_5;
  short v;
  float result;
  v_7 = 4294907109U;
  v_5 = (short)(((double)p_9 + 9267.89573922) + 4294916352.);
  v = (short)((- p[0][4] % (unsigned long)(~ ((unsigned int)-98.8676147461f << (
                                              v_7 & 31U)) + 911U)) / 4002354344UL);
  result = (float)(267980517UL / (((unsigned long)v - - (p[0][1] | (unsigned long)v_5)) + 843UL));
  return result;
}


