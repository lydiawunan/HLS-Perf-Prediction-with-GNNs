#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365236768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, long long p_4)
{
  long long v_7;
  unsigned long long v;
  short result;
  v = 429280979ULL;
  v_7 = (long long)(- (39110ULL % ((unsigned long long)(p * (double)p_4) + 711ULL)));
  if (~ ((unsigned long long)2.00922966026e+38 - v) <= (unsigned long long)(! v_7)) 
    result = (short)120;
  else result = (short)(p * (double)p_4);
  return result;
}


