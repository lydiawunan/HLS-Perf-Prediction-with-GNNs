#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 143233547
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, float p_7[2][5], unsigned long p_9,
                unsigned short p_13, char p_17)
{
  int v_15;
  float v_11;
  float v_5;
  unsigned int v;
  signed char result;
  v_15 = 619401112;
  v_11 = 4.71019665876e+37f;
  v = 4036521016U;
  v_5 = p_7[0][1];
  result = (signed char)(((unsigned long)((3U - v) - (unsigned int)(1062474816.f * v_5)) * (
                          (p % ((unsigned long)p_7[1][0] + 762UL)) * ! p_9)) * (unsigned long)(
                         (v_11 + - v_11) + (float)(p_9 * (unsigned long)p_13 | (unsigned long)(
                                                   v_15 - (int)p_17))));
  result = (signed char)(~ ((p & (unsigned long)((long)result * 141504313L)) - 
                            ! p * ! p));
  return result;
}


