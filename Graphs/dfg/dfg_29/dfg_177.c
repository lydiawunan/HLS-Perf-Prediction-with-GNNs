#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 592904410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p)
{
  unsigned char v_13;
  int v_10;
  float v_8;
  unsigned short v_6;
  long long v_4;
  float v;
  unsigned long long result;
  v_13 = (unsigned char)140;
  v_10 = (int)p;
  v_8 = -4398459392.f;
  v = (float)p;
  v_4 = (long long)p;
  v_6 = (unsigned short)(~ 0);
  v = (float)(v_10 + (! ((int)v - 26470) ^ (int)p));
  result = (unsigned long long)(~ (85LL - ((long long)v ^ v_4)) * (long long)(- (
                                (double)(- v_6) * ((double)v_8 - -732.743935527))));
  return result;
}


