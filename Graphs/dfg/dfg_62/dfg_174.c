#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 434452690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, unsigned char p_4, char p_7[4][1],
                 float p_15, float p_17)
{
  float v_13;
  unsigned char v_11;
  float v_9;
  signed char v;
  unsigned int result;
  v_13 = -1.67709454385e+38f;
  v_9 = (float)4294964041UL;
  v_11 = (unsigned char)(~ (32750U / ((unsigned int)(p_15 - (p_17 + 64437.f)) + 122U)));
  v = (signed char)(- ((- v_9 - 0.f) / ((float)((unsigned long)v_11 * 3475277429UL) * (
                                        v_13 / 429354016.f) + 849.f)));
  result = (unsigned int)(~ (212ULL * p - (unsigned long long)p_4) * ! (
                          (unsigned long long)v / (((unsigned long long)p_7[1][0] - p) + 417ULL)));
  return result;
}


