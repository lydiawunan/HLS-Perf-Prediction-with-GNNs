#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112850161
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, char p_5, double p_11)
{
  long long v_17;
  long long v_15;
  int v_13;
  int v_9;
  signed char v_7;
  unsigned int v;
  long long result;
  v_17 = -262324694LL;
  v_15 = -8969LL;
  v_13 = (int)p;
  v_9 = (int)p_11;
  v_9 = (int)((long long)(! v_13) - (v_15 | (v_17 - (long long)v_9)) / 49416LL);
  v_7 = (signed char)(! (- (! v_9) + (int)p_11));
  v = (unsigned int)v_7;
  result = (long long)((unsigned int)-541.009289751 * ((unsigned int)p * v + (unsigned int)(~ (! p_5))));
  return result;
}


