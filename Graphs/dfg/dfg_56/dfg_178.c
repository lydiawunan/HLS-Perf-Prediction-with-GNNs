#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 336685204
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(void)
{
  unsigned short v_10;
  long long v_8;
  float v_6;
  signed char v_4;
  unsigned long v;
  unsigned long long result;
  v_10 = (unsigned short)4212;
  v_8 = -55710LL;
  v_6 = (float)(! (~ v_8) % (long long)((int)(- (! v_10)) + 307) - -532952823LL);
  v_4 = (signed char)v_6;
  v = (unsigned long)v_4;
  result = (unsigned long long)v;
  return result;
}


