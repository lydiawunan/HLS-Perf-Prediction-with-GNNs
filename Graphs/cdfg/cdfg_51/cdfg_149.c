#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470115281
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, int p_13, long long p_15, long p_17)
{
  unsigned int v_11;
  short v_9;
  signed char v_6;
  long v_4;
  short v;
  char result;
  v_11 = (unsigned int)p_17;
  v_6 = (signed char)46;
  v_4 = (long)p;
  result = (char)-24;
  v_9 = (short)((long long)p_17 * p_15);
  if ((unsigned long long)((long long)(p_13 - (int)result) - p_15) - ! p < (unsigned long long)(
      (int)8966312657.92 << (- ((int)v_6 - 10470) & 31))) {
    v = (short)((! p & (unsigned long long)((int)v_9 * (int)v_6)) * (
                p / (unsigned long long)((unsigned long)v_11 % (unsigned long)(
                                         v_4 + 103L) + 771UL)));
    result = (char)(- (v_4 * (long)result) * (long)v_6);
    result = (char)((50 / ((int)result + 827) - (int)(! v)) % ((int)(- (- result)) + 393));
  }
  else result = (char)p_13;
  return result;
}


