#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 943666329
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, long long p_11, unsigned long long p_15)
{
  long v_13;
  signed char v_9;
  short v_7;
  unsigned short v_4;
  float v;
  signed char result;
  v_13 = -28881L;
  v_7 = (short)567;
  v_9 = (signed char)(- (((long long)p / (p_11 + 489LL) + (long long)v_13) >> (
                         p_15 & 63ULL)));
  v = (float)v_9;
  v_4 = (unsigned short)(p - (unsigned long)(~ (~ (~ v_7))));
  result = (signed char)(~ ((int)((unsigned short)v) / ((int)v_4 + 402)));
  return result;
}


