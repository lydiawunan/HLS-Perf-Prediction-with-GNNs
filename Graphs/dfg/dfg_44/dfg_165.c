#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1008586763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned int p_5[5], float p_9, short p_11, long p_15)
{
  unsigned short v_13;
  unsigned short v_7;
  unsigned short v;
  char result;
  v_13 = (unsigned short)p_9;
  v = (unsigned short)((float)(- v_13) + - ((float)p_15 + p_9) / ((float)(- (
                                                                  -740363537L + p)) + 925.f));
  v_7 = (unsigned short)p_11;
  v = (unsigned short)((float)(p + (long)((double)v - 301.073942895)) * p_9);
  result = (char)((unsigned long)((long)(! v) / (((long)v - p) + 250L) << (
                                  -29753L % (- p + 249L) & 31L)) / (unsigned long)(
                  - (((unsigned int)3.29430262932e+38 + p_5[2]) % (unsigned int)(
                     (int)(~ v_7) + 817)) + 1010U));
  return result;
}


