#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606734481
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p)
{
  short v_13;
  unsigned int v_10;
  double v_8;
  long long v_6;
  long long v_4;
  unsigned long v;
  long result;
  v_13 = (short)27683;
  v_10 = (unsigned int)p;
  v_8 = 4146819344.53;
  v_4 = (long long)p;
  v = (unsigned long)p;
  result = (long)p;
  v_10 = ! (! ((72U - v_10) << ((result | (long)v_13) & 31L)));
  result = (long)((235 + (int)((unsigned char)(- p))) % 521 - (int)(- (- (- v_13))));
  v_6 = (long long)((double)(3278860564U + ((unsigned int)(v_8 + (double)result) ^ v_10)) - -75.8234980677);
  result = (long)((long long)(- (3.18874344432e+38f + (float)((long long)v - v_4))) - v_6);
  return result;
}


