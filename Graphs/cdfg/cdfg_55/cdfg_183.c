#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 998343298
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p, signed char p_4, unsigned short p_6[1], unsigned int p_9,
          long long p_11)
{
  signed char v_17;
  long v_15;
  short v_13;
  unsigned long long v;
  float result;
  v_15 = -24167L;
  v_13 = (short)20555;
  v = (unsigned long long)p_6[0];
  result = -42.6780395508f;
  while (! p_9 == (unsigned int)(((double)((unsigned long long)p_11 - v) / (
                                  3.43019445876e+37 / ((double)p_4 + 781.) + 1011.)) / (double)(
                                 - (28036.f / (result + 484.f)) + 785.f))) {
    v = (long long)v_13 * 935352940LL;
    v_17 = (signed char)-89;
    v_13 = (short)(((unsigned long)((unsigned int)p_4 * p_9) + 3866358684UL) / (unsigned long)(
                   ((int)v_17 * (int)((signed char)p) - -550) + 673));
    result = (float)((3829774089ULL % (v + 731ULL) | (unsigned long long)(
                      (long)p | v_15)) % (unsigned long long)(v_15 + 178L));
  }
  while_0_break: ;
  while (- (p * (float)((int)p_4 * (int)p_6[0])) <= result) {
    v = (double)v - 7111858033.27;
    result = (float)(289ULL + v);
    result = result;
  }
  while_0_break_0: ;
  return result;
}


