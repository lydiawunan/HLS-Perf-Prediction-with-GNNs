#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785009256
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long long p_4,
                  unsigned long long p_6[5][5][5], float p_9,
                  unsigned char p_11[4][1][1])
{
  float v_13;
  short v;
  unsigned long result;
  v_13 = (float)(18446744073709551586ULL / (! (18446744073709541378ULL & (
                                               38369ULL + (unsigned long long)p_9)) + 142ULL));
  v = (short)((unsigned long)(- ((double)v_13 * 2178761030.35) + (double)p_4) / (
              (20980UL & (unsigned long)((int)((unsigned char)p) % ((int)p_11[3][0][0] + 960))) % (unsigned long)(
              ! ((int)p_11[0][0][0] | (int)p_11[3][0][0]) + 183) + 428UL));
  result = (unsigned long)((p * p - (double)(~ p_4)) * (double)(! p_6[4][3][0]) + (double)(
                           (float)(~ ((int)v + 35961)) + (p_9 + 5767.f) / (
                                                         (p_9 + (float)p_11[0][0][0]) + 583.f)));
  return result;
}


