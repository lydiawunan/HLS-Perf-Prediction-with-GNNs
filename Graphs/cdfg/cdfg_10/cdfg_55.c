#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574714213
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, double p_7, long long p_11, long p_13,
                  long p_15)
{
  signed char v_19;
  long long v_17;
  long long v_9;
  long long v_5;
  unsigned long long v;
  unsigned long result;
  v_19 = (signed char)p_7;
  v_17 = -58384787LL;
  v_9 = -3LL;
  if (v_9 - (p_11 / (long long)(p_13 + 724L) + (long long)(- p_15)) > 
      ~ v_17 + (long long)v_19) {
    v = (unsigned long long)p;
    result = (unsigned long)(~ ((6256ULL - v) / 25ULL));
  }
  else {
    v_5 = (long long)((unsigned int)(- p_7) ^ 4091383505U);
    result = (unsigned long)(- (3216742690LL / (~ v_5 + 904LL)));
  }
  return result;
}


