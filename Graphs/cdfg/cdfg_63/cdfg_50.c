#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250300464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned long long p_5, long long p_11[1],
          unsigned short p_13[3][1])
{
  unsigned long v_15;
  unsigned long v_9;
  long v_7;
  char v;
  short result;
  v_15 = 4073611175UL;
  v_9 = 680824719UL;
  v_7 = (long)p_11[0];
  if ((long long)((unsigned long)v_7 ^ (v_9 - 2216UL)) >= 0LL - (p_11[0] | (long long)(
                                                                 (unsigned long)p_13[0][0] * v_15))) 
    v = (char)(~ 0);
  else v = (char)24;
  if ((unsigned long long)v / (- (! p_5) + 1023ULL) == (unsigned long long)v) 
    result = (short)361.843567606;
  else result = (short)(625057323UL % (p + 107UL));
  return result;
}


