#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1048171185
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, unsigned long long p_9, long long p_13[2][5],
                unsigned int p_15)
{
  double v_17;
  unsigned char v_11;
  double v_7;
  short v_4;
  unsigned short v;
  signed char result;
  v_17 = (double)p_15;
  v = (unsigned short)p_15;
  v_4 = (short)(- ((double)(32.f - p) + - v_17) + (double)p_13[0][0]);
  v_11 = (unsigned char)(p_13[1][0] - (long long)p_15);
  v_7 = (double)(- (~ (p_9 / 167162029ULL) - (unsigned long long)(- v_11)));
  result = (signed char)((unsigned long long)v - ((unsigned long long)(
                                                  (double)((float)v_4 * p) / (
                                                  (-19592. + v_7) + 561.)) ^ p_9));
  return result;
}


