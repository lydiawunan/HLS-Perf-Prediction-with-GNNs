#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016785402
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned long p_9)
{
  unsigned short v_13;
  unsigned long v_11;
  char v_7;
  long long v_5;
  double v;
  long long result;
  v_13 = (unsigned short)41912;
  v_11 = 726899882UL;
  v_5 = 28438LL;
  v_7 = (char)((- (v_5 - (long long)p_9) / (long long)(! (~ v_11) + 438UL)) % (long long)(
               (int)(~ v_13) + 370));
  v = (double)v_7;
  result = (long long)(! (! ((int)p / 74) / ((int)(v - (double)(v_5 % 1038648546LL)) + 518)));
  result = result;
  return result;
}


