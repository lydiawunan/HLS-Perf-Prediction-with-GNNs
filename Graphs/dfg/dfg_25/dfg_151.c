#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809417968
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  unsigned int v_8;
  short v_6;
  long long v_4;
  unsigned short v;
  double result;
  v_4 = -109113390LL;
  v = (unsigned short)10359;
  v_8 = (unsigned int)(- (! (! (-13826LL * v_4))));
  result = (double)v_8;
  v_6 = (short)result;
  result = (double)((long long)v % (-104LL * ~ v_4 + 85LL) - (long long)v_6);
  return result;
}


