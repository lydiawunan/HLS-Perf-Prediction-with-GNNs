#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252378501
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, unsigned short p_7, signed char p_9,
          unsigned int p_11[1][3][4], long p_13)
{
  unsigned long long v_4;
  unsigned char v;
  float result;
  result = p;
  v = (unsigned char)((unsigned long)(799052647L % (p_13 / ((long)(p + p) + 646L) + 984L)) / (
                      ! (! ((unsigned long)p_13 * (unsigned long)p_11[0][0][1])) + 909UL));
  v = (unsigned char)((unsigned long)v * (((unsigned long)p_9 & ((unsigned long)p_11[0][2][2] | 188740220UL)) * (unsigned long)(
                                          ((double)p_13 + -3.40247640122e+38) - -93.1015120033)));
  v_4 = (unsigned long long)(- (- (p / -561311232.f)) / ((float)p_7 + 265.f));
  result = (float)(~ ((unsigned long long)((int)((unsigned char)result) - (int)(- v)) & v_4));
  return result;
}


