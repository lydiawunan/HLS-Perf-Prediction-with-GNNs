#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 393313419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(void)
{
  short v_8;
  int v_6;
  unsigned long v_4;
  int v;
  long long result;
  v_8 = (short)12434;
  v_4 = 4294936869UL;
  v = -58479;
  result = -373406962LL;
  v_6 = (int)((! (-9LL * result) + (long long)(! (! v_8))) / (long long)(
              - v_4 + 960UL));
  v_4 = (unsigned long)(-39 >> (v & 7));
  v = (int)((- (v_4 - (unsigned long)v_6) * 61462UL) % 4294967295UL);
  result = (long long)v;
  return result;
}


