#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 635050881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, signed char p_5, unsigned long p_7, double p_17)
{
  long long v_15;
  unsigned int v_13;
  unsigned long long v_11;
  int v_9;
  long v;
  short result;
  v_15 = -309437781LL;
  v_13 = 23279U;
  v_11 = 59261ULL;
  result = (short)p_17;
  v_9 = (int)(~ ((4294953897U * v_13) / (unsigned int)(676 / ((int)result + 910) + 491)) - (unsigned int)(
              (double)(-62193L ^ (long)((double)v_15 / (p_17 + 307.))) / (
              - (- p_17) + 999.)));
  v = (long)v_11;
  result = (short)30950;
  result = (short)(((long long)(~ (- p)) * ! (273802573LL - (long long)result)) * (long long)(
                   (unsigned long)(- v + (long)(! p_5)) - (! p_7 | (unsigned long)v_9)));
  return result;
}


