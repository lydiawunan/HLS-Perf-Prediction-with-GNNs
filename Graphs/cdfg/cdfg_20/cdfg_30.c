#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801276469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p[4][5][2], int p_5[5][2],
                  unsigned long long p_7)
{
  unsigned short v;
  unsigned long result;
  v = (unsigned short)((unsigned long long)p_5[3][1] % ((~ p_7 - 65394ULL) + 503ULL));
  result = (unsigned long)(0LL / (! ((long long)p[0][3][0] / -2621LL) + 237LL));
  return result;
}


