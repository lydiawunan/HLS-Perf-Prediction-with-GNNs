#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 679296466
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long long p_4)
{
  unsigned char v_15;
  unsigned char v_13;
  short v_11;
  float v_9;
  float v_7;
  unsigned long v;
  int result;
  v_15 = (unsigned char)p;
  v_13 = (unsigned char)p;
  v_11 = (short)p_4;
  v_9 = (float)p;
  v_7 = (float)p_4;
  v = (unsigned long)p_4;
  result = (int)p;
  result = result;
  while ((long long)(121U / (p + 872U)) - (p_4 - 3961422851LL) % (long long)(
                                          v % (v + 574UL) + 110UL) != (long long)(- (
         - v_7 / (v_9 + 458.f)))) {
    v_9 = (float)(~ ((long long)((int)v_11 % ((int)v_13 + 429)) * (p_4 % (long long)(
                                                                   (int)v_15 + 729))));
    v_11 = (short)((((long long)result * p_4) / (p_4 + 939LL)) * (long long)v);
    v = (unsigned long)p;
  }
  while_0_break: ;
  return result;
}


