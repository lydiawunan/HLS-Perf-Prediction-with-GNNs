#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468419340
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, short p_9, float p_11)
{
  float v_13;
  unsigned long v_7;
  long long v_4;
  short v;
  unsigned int result;
  v_13 = (float)p;
  v_7 = (unsigned long)p_9;
  result = 57743U;
  v = (short)-895;
  v_4 = (long long)((unsigned long)(result * (unsigned int)((int)p / 105)) / (
                    - (v_7 % (unsigned long)((int)p_9 + 307)) + 749UL) & (unsigned long)(- (
                    p_11 / (v_13 + 185.f))));
  result = (unsigned int)((long long)v ^ v_4 / (long long)((int)p + 671));
  return result;
}


