#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 284886969
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(void)
{
  unsigned long v_6;
  unsigned long long v_4;
  unsigned long v;
  long long result;
  v_6 = 3695645377UL;
  v_4 = 18446744073709508586ULL;
  v = (unsigned long)(62098ULL * - ((v_4 % (unsigned long long)(v_6 + 912UL)) * 161ULL));
  result = (long long)v;
  v = (unsigned long)(! result);
  result = (long long)(! ((61UL ^ v) + 4294942136UL));
  return result;
}


