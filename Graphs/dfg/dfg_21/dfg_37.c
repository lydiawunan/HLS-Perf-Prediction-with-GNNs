#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038473039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p[3], unsigned long long p_9)
{
  unsigned long v_17;
  float v_15;
  unsigned long v_13;
  unsigned long long v_11;
  float v_6;
  unsigned int v_4;
  double v;
  int result;
  v_17 = (unsigned long)p_9;
  v_15 = 2.08502980578e+37f;
  v_11 = p_9;
  v_6 = (float)p[2];
  v = (double)p[0];
  v_13 = ! v_17;
  result = (int)(~ ((724728652ULL / ((v_11 >> 9) + 713ULL)) / (unsigned long long)(
                    (v_13 + 3542323847UL % ((unsigned long)v_15 + 108UL)) + 505UL)));
  v_4 = (unsigned int)(~ (! ((unsigned long long)p[2] % (p_9 + 297ULL)) + (unsigned long long)v));
  result = (int)((((unsigned int)v / (v_4 + 482U)) / 124U - (unsigned int)(- (
                  -882.034971483 - (double)v_6))) % (unsigned int)(result + 410));
  return result;
}


