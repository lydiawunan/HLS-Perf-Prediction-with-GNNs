#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626978834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[4][1])
{
  double v_8;
  unsigned int v_6;
  unsigned long long v_4;
  unsigned int v;
  short result;
  v_6 = 4294944006U;
  v_4 = (unsigned long long)p[0][0];
  v = 36130U;
  v_8 = (double)(~ (short)-4617);
  v = (v + ! ((unsigned int)p[3][0] % (v + 333U))) * 671372422U;
  v = (unsigned int)(! ((unsigned long long)(- v) * ! v_4 + (unsigned long long)(
                        v_6 + (unsigned int)(- v_8))));
  result = (short)v;
  return result;
}


