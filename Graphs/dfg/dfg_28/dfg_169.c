#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698150273
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p[1][3][2], unsigned long p_5[3][1], double p_11[2],
         unsigned int p_13, float p_15)
{
  float v_17;
  unsigned short v_9;
  unsigned char v_7;
  unsigned long long v;
  char result;
  v_17 = (float)p_5[1][0];
  v_9 = (unsigned short)p_15;
  v_7 = (unsigned char)((((unsigned long)(p_11[1] + -1.67079949587e+38) + p_5[2][0]) % (unsigned long)(
                         (p_13 - 4294967248U) + 72U)) * (unsigned long)(! (
                        ((long)v_17 - p[0][0][0]) % (p[0][2][0] + 830L))));
  v = (unsigned long long)((unsigned long)(-47 + ((int)v_7 & (int)v_9)) ^ (
                           (unsigned long)(~ ((unsigned int)p_11[1] + p_13)) ^ (
                           (unsigned long)p_15 * p_5[0][0] | 3449769385UL)));
  result = (char)(((unsigned long long)-918.162597656f / ((v << (p[0][1][0] & 63L)) + 963ULL)) % (unsigned long long)(
                  ~ (- (- p_5[2][0])) + 185UL));
  return result;
}


