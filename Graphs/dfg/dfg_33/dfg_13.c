#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 384308450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, double p_5[1], long p_11,
                       unsigned long p_13)
{
  unsigned long long v_9;
  short v_7;
  short v;
  unsigned long long result;
  v_9 = (unsigned long long)(-45047UL);
  v_7 = (short)p_5[0];
  v = (short)13228;
  result = (unsigned long long)((-17144LL + (long long)((int)p % -126)) % (long long)(
                                ((int)v & (int)((short)p_5[0])) % (((int)v_7 - (int)p) + 854) + 1014)) | ! (
           (v_9 + (unsigned long long)p_11) | (unsigned long long)(p_13 - (unsigned long)v));
  return result;
}


