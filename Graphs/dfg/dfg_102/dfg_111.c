#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253655828
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p)
{
  unsigned int v_7;
  long long v_5;
  int v;
  double result;
  v_7 = (unsigned int)p;
  v_5 = 822246251LL;
  v = -12750;
  result = (double)(! (~ (v_5 ^ (long long)v_7) % 13LL));
  result = - ((double)(- (v ^ (int)p)) * ((-135.01071167 + result) + result));
  result = result;
  result = (double)(- ((int)((short)((double)p + result)) / 28764));
  return result;
}


