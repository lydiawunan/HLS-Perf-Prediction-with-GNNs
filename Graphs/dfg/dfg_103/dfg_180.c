#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173699517
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, long p_9)
{
  short v_7;
  unsigned short v_5;
  float v;
  unsigned long result;
  v_5 = (unsigned short)p;
  result = (unsigned long)p_9;
  v_7 = (short)4394;
  v = (float)(- ((long)(- v_5) | -21L * ((long)v_7 + p_9)));
  v_5 = (unsigned short)(- (853UL + result) - (unsigned long)(~ ((unsigned int)(
                                                                 v - 4312588288.f) | 4294962584U)));
  result = (unsigned long)((17276LL ^ - (! p)) << ((((long long)((float)p * v) + ! p) - (long long)(
                                                    (int)(! v_5) - 779192905)) & 63LL));
  return result;
}


