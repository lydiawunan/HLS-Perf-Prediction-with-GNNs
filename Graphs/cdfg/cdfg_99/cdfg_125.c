#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 664261008
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, unsigned long p_13[5], float p_17)
{
  unsigned char v_15;
  float v_11;
  char v_9;
  unsigned int v_7;
  unsigned long v_4;
  long v;
  unsigned int result;
  v_11 = 3.27710295046e+38f;
  v_9 = (char)-102;
  v_7 = (unsigned int)p_13[2];
  v_4 = 254217290UL;
  v = (long)p_13[0];
  result = (unsigned int)p_13[1];
  while ((unsigned long)result != v_4 * (! p / ((p >> (v_4 & 31UL)) + 872UL))) {
    v_15 = v_11 * (float)((long)v_9 + -53385L);
    v = (long)(21U % (v_7 % ((unsigned int)(p_17 * -71.f) + 566U) + 10U));
    v_11 = (float)((long long)((unsigned long)v * p_13[4]) / (((long long)result - -47070LL) + 283LL) + (long long)(- (
                   (int)v_15 / ((int)v_15 + 490))));
    v_4 = - p;
  }
  while_0_break: ;
  result = (unsigned int)((unsigned long)(- v ^ 0) / 4294908573UL);
  return result;
}


