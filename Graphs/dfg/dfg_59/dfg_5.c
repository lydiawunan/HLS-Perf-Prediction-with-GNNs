#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 233679038
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned long p_4,
                       unsigned long p_11[5][1])
{
  unsigned char v_9;
  unsigned char v_7;
  double v;
  unsigned long long result;
  v_9 = (unsigned char)p_4;
  v_7 = (unsigned char)8;
  v = (double)p_11[1][0];
  result = (unsigned long long)(- ((~ p_11[1][0] - 619217832UL) % (unsigned long)(
                                   (int)v_9 + 228)));
  v_9 = (unsigned char)((unsigned long long)v_9 & - ((unsigned long long)(
                                                     4294936487. + v) - - result));
  v = (double)((int)v_7 ^ (int)(- v_9));
  result = (unsigned long long)(((unsigned long)(~ p) / 55028UL + p_4) ^ (unsigned long)(! (
                                (23393 & (int)((unsigned short)v)) / (
                                (int)p + 609))));
  return result;
}


