#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 19051268
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p)
{
  short v_15;
  unsigned int v_13;
  unsigned short v_11;
  double v_9;
  signed char v_7;
  unsigned int v_5;
  unsigned int v;
  int result;
  v_15 = (short)p;
  v_13 = 4294947974U;
  v_11 = (unsigned short)p;
  v_9 = 978.404263829;
  v_7 = (signed char)55;
  v_5 = (unsigned int)p;
  v = 3257736935U;
  result = (int)p;
  while (p <= ((long long)v_5 & ((long long)((double)v_7 / (v_9 + 22.)) - (
                                 p | (long long)v_11)))) {
    v_13 = (float)v_15 + (float)v_13 * 331.493530273f;
    v = (unsigned int)(- (! (signed char)92));
    v_9 = (double)(p - (long long)result);
    v_5 = 4024862389U;
  }
  while_0_break: ;
  result = (int)v;
  return result;
}


