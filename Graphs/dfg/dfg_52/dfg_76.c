#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 320523299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, long p_5, long p_9,
                   unsigned long p_11, long p_13)
{
  int v_17;
  long long v_15;
  short v_7;
  unsigned int v;
  unsigned short result;
  v_17 = (int)p_9;
  result = (unsigned short)p_11;
  v_15 = - (- ((-213155491LL << (p_11 & 63UL)) ^ (long long)(- v_17)));
  v_7 = (short)((long long)p_11 / (((long long)p_13 + ((v_15 + (long long)result) - (long long)(
                                                       3542684429UL - (unsigned long)p_5))) + 40LL));
  v = (unsigned int)(- (~ (p / (unsigned long long)(p_5 + 120L)) & (unsigned long long)(
                        ((int)v_7 << (p_9 & 15L)) + (int)(~ v_7))));
  result = (unsigned short)v;
  return result;
}


