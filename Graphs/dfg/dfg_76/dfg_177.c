#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 686043534
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p[4][1][1])
{
  unsigned int v_7;
  unsigned int v_4;
  unsigned int v;
  signed char result;
  v = (unsigned int)p[3][0][0];
  v_7 = 4294967245U;
  v_4 = v_7;
  v = (unsigned int)((-31081LL + (long long)((unsigned int)((int)p[2][0][0] - (int)p[3][0][0]) & - v)) ^ 61903340LL);
  result = (signed char)(- (! (~ v) - v_4));
  return result;
}


