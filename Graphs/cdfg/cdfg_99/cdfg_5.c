#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 614430152
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[3][3][5], unsigned char p_4,
                 unsigned short p_7, unsigned long long p_13)
{
  unsigned long long v_21;
  float v_19;
  unsigned int v_17;
  unsigned char v_15;
  long v_11;
  unsigned long v_9;
  int v;
  unsigned int result;
  v_21 = 18446744073709532305ULL;
  v_19 = (float)p_7;
  v_17 = 27722U;
  v_11 = (long)p_4;
  v = (int)p_13;
  result = 3991299953U;
  v_9 = (unsigned long)((unsigned int)p[0][0][3] - (v_17 ^ (unsigned int)v_19) / (
                                                   (unsigned int)((float)v_21 / (
                                                                  v_19 + 384.f)) + 377U));
  while ((int)(~ p_4) < v % ((int)(- (- p_7)) + 16)) {
    result = (double)v_11 + 181.661201695;
    v_15 = (unsigned char)-642.086730957f;
    v_11 = (long)((unsigned long)(~ p[2][2][3]) % (! v_9 + 53UL));
    v = (int)(! p_13 / (unsigned long long)(((long long)p_4 - -60095LL) + 499LL) & (unsigned long long)v_15);
  }
  while_0_break: ;
  return result;
}


