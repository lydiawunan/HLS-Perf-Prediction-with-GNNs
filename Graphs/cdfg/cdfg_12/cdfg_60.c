#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 116049675
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, float p_7, unsigned long long p_13,
                  long long p_17, unsigned int p_19[3][4])
{
  int v_15;
  unsigned char v_11;
  unsigned char v_9;
  unsigned int v_4;
  float v;
  unsigned char result;
  v_15 = -22526;
  v_11 = (unsigned char)41;
  v_9 = (unsigned char)p_13;
  v_4 = 4294946089U;
  result = (unsigned char)p_17;
  if ((unsigned int)(8.44502796614e+37 / ((double)p_19[0][0] + 365.)) + - (
      v_4 / (v_4 + 451U)) >= p) {
    v_4 = (unsigned int)(! (! p_13) / 18446744073709488961ULL);
    v = (float)(p / 4294963995U);
    result = (unsigned char)(- ((unsigned long long)v_11 % ((18446744073215950042ULL - (unsigned long long)p_7) + 399ULL)));
  }
  else {
    v = (float)(~ (((long long)p / (p_17 + 688LL)) * (long long)(- result)));
    result = (unsigned char)(! (18446744073371059375ULL * (unsigned long long)(
                                (unsigned int)v_15 * v_4)));
    v_9 = (unsigned char)(- p);
  }
  while (- v != 37607.f) {
    result = (unsigned char)((~ v_4 % ((unsigned int)(p_7 / (v + 908.f)) + 845U)) * (unsigned int)v_9);
    v_4 = p;
    v = - (- v);
  }
  while_0_break: ;
  return result;
}


