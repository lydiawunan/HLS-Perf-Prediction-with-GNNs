#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 281373370
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, long long p_7, float p_9[2][4][4])
{
  float v_11;
  unsigned char v_5;
  unsigned long v;
  float result;
  v_11 = (float)p;
  v = (unsigned long)v_11;
  v_5 = (unsigned char)((long)p_9[1][2][1] / -2770L);
  result = (float)((long long)v_5 % (p_7 + 469LL));
  result = (float)((unsigned long)((0 % ((int)result + 883)) % ((int)(~ (! p)) + 418)) + ~ (- (
                   v / (v + 388UL))));
  return result;
}


