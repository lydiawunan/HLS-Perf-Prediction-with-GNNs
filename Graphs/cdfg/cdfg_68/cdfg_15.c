#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 369596725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[5][3], unsigned char p_9, unsigned int p_11,
                   long p_13, unsigned char p_15)
{
  long v_7;
  float v_5;
  double v;
  unsigned short result;
  v_7 = 415609861L;
  v_5 = (float)p_11;
  result = (unsigned short)14283;
  v = (double)((unsigned long long)(~ (-109 / ((int)p_15 + 86))) / ((unsigned long long)(
                                                                    (int)((char)206.568204225) * 96) * 18446744073709494984ULL + 250ULL));
  while ((unsigned long long)result == (unsigned long long)p[1][0] % 61479ULL) {
    v_5 = v_7 - (long)((double)v_5 / ((v + -798.308905902) + 174.));
    v_7 = (long)(~ (- ((int)p[4][0] + (int)p_15)));
    v = (double)((long long)((unsigned int)((int)p_9 & (int)p[1][1]) - - p_11) - ! (
                 -4606LL % (long long)(p_13 + 359L)));
    result = (unsigned short)(-(short)7495);
  }
  while_0_break: ;
  return result;
}


