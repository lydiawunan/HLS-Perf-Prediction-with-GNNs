#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068894730
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p)
{
  int v_9;
  signed char v_7;
  double v_5;
  signed char v;
  int result;
  v_9 = 312652954;
  v_5 = (double)p;
  v_7 = (signed char)(- (v_5 + - ((double)v_9 + -1.76857652023e+38)));
  v = (signed char)(~ (18446744072935228351ULL % ((unsigned long long)(
                                                  v_5 - -101.28742605) + 754ULL) - (unsigned long long)v_7));
  result = 37576;
  result = (int)(- ((long long)(~ result + 26696) / ((-47396LL + p * (long long)v) + 872LL)));
  return result;
}


