#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 395257025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p[5][5], long long p_9, int p_13)
{
  short v_11;
  unsigned int v_7;
  unsigned short v_4;
  unsigned long long v;
  double result;
  v_7 = (unsigned int)p_9;
  v_11 = (short)p_13;
  v_4 = (unsigned short)((long long)p[3][3] % (((long long)(! v_7) + p_9) + 702LL) - (long long)(- v_11));
  v = (unsigned long long)-6.0644771676e+37;
  result = (double)(42232ULL - v * 25012ULL) / (- (-53.5135282067 - (double)(- v_4)) + 225.);
  return result;
}


