#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 314175482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[5][5], unsigned long long p_5)
{
  int v_13;
  unsigned long v_11;
  double v_9;
  unsigned long v_7;
  short v;
  unsigned char result;
  v_13 = -48649;
  v_9 = (double)p_5;
  v_7 = 60208UL;
  v = (short)p[4][0];
  result = (unsigned char)162;
  v_11 = (unsigned long)((double)((~ v_7 * (unsigned long)(! v)) * (unsigned long)v_13) - v_9);
  v = (short)(! ((unsigned long long)((double)(v_7 % ((unsigned long)-2310754304.f + 786UL)) / (
                                      - v_9 + 188.)) + ! p_5));
  v = (short)((unsigned long)v / (((v_7 * (unsigned long)v_9 >> (p_5 & 31ULL)) + 
                                   3285UL * v_11) + 332UL));
  result = (unsigned char)((unsigned long long)(- ((unsigned int)v * (
                                                   p[0][4] * (unsigned int)result))) | (
                           (unsigned long long)result ^ - p_5));
  return result;
}


