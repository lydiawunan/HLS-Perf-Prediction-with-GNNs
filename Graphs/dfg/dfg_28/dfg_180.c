#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 596032183
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, long p_7[5][5], long p_9,
                   unsigned long p_11, float p_13[2])
{
  float v_5;
  float v;
  unsigned short result;
  v_5 = (float)(24L | p_9);
  v = (float)75831707UL;
  result = (unsigned short)((int)((float)(~ (15 - (int)((signed char)v))) / (
                                  (((float)p + v_5) - (float)(p_7[2][1] + p_9)) + 57.f)) % (
                            -21367 % ((int)((short)((float)p_11 * (v_5 - p_13[1]))) + 458) + 533));
  return result;
}


