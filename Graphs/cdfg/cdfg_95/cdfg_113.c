#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345426255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p[3][4], unsigned short p_7,
                       unsigned int p_9[3], unsigned short p_11, double p_13)
{
  float v_17;
  long long v_15;
  int v_4;
  unsigned int v;
  unsigned long long result;
  v_15 = -739024686LL;
  result = (unsigned long long)p_9[0];
  v_17 = (float)result;
  if (result < ((result + (unsigned long long)v_15) % ((unsigned long long)v_17 + 917ULL)) / (unsigned long long)(
               (unsigned int)-306.266928178 / 3276468747U + 442U)) {
    v_4 = -26655 * (int)p[2][3];
    v = (unsigned int)v_4;
    result = (unsigned long long)v;
  }
  else result = (unsigned long long)(! (! ((unsigned int)p_7 * p_9[1])));
  return result;
}


