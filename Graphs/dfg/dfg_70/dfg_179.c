#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 560891723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, unsigned short p_4, unsigned char p_9,
              unsigned int p_11[4][1], float p_13)
{
  unsigned char v_15;
  unsigned char v_7;
  long v;
  long long result;
  v_15 = (unsigned char)p;
  v_7 = (unsigned char)(- (- ((unsigned int)p_9 * 35581U)) ^ (unsigned int)(
                        (0.f - ((float)p_11[3][0] + p_13)) + (float)(
                        ((unsigned long)p ^ 259139526UL) + (unsigned long)(
                        -84 >> ((int)v_15 & 7)))));
  v = (long)v_7;
  result = (long long)v;
  result = (long long)p | ! (result / (long long)((int)(! p_4) + 1011));
  return result;
}


