#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057322900
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p[4][1], double p_7, unsigned char p_9)
{
  signed char v_17;
  float v_15;
  long long v_13;
  long v_11;
  long v_4;
  char v;
  char result;
  v_17 = p[3][0];
  v_15 = (float)p[3][0];
  v_11 = (long)p_7;
  v_4 = 7778L;
  v_13 = 530140925LL;
  result = (char)(83ULL * ((23126ULL + (unsigned long long)v_13 / 18446744073494929640ULL) % (unsigned long long)(
                           ((int)v_15 - ((int)v_17 ^ 125)) + 69)));
  v = (char)(- ((unsigned long)v_11 % 4294946145UL & (unsigned long)(
                -2196910080. + - p_7)));
  result = (char)((long)((int)result - (int)v) | - (! v_4) / (long)((
                                                                    (
                                                                    -18650 + (int)p[3][0]) | (int)(
                                                                    p_7 - (double)p_9)) + 618));
  return result;
}


