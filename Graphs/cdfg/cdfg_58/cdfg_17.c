#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 461642716
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, float p_4, long long p_6, signed char p_8,
                  unsigned long p_11)
{
  unsigned long long v_15;
  short v_13;
  long long v;
  unsigned long result;
  v_15 = (unsigned long long)p_6;
  v_13 = (short)p_8;
  v = (long long)(18446744073709522500ULL & ((unsigned long long)p_11 + 
                                             v_15 % (unsigned long long)(
                                             p_11 + 329UL)));
  if ((4319LL + v) / (long long)((! p_11 >> ((int)(! v_13) & 31)) + 652UL) == 27LL) 
    result = (unsigned long)(p + ((double)((unsigned int)p_4 % 3342844307U) + p));
  else result = (unsigned long)(- (- (p_6 - (long long)p_8)));
  return result;
}


