#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882666145
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p)
{
  unsigned char v_7;
  double v_5;
  long v;
  long long result;
  v_7 = (unsigned char)p;
  v_5 = -8098788408.19;
  v_5 = v_5;
  v = (long)(! ((int)v_7 / (78 / (p + 772) + 436) - -102));
  result = (long long)((double)(! (! (p * 30170))) + v_5);
  result = ! (! (result * (long long)v)) - 232LL;
  return result;
}


