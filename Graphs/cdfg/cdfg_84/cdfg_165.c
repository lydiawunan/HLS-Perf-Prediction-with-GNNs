#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510858176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, unsigned long long p_5, double p_13, float p_15)
{
  unsigned char v_11;
  short v_9;
  long long v_7;
  unsigned long long v;
  long result;
  v_11 = p;
  v_7 = (long long)p_5;
  v_9 = (short)((int)((unsigned char)((double)(~ v_11) + (p_13 - (double)p_15))) - (int)(! v_11));
  if ((long long)(2.14231383037e+38 / ((double)(p_5 & (unsigned long long)v_7) + 671.)) / -218539258LL >= (long long)v_9) {
    v = (unsigned long long)(-24174LL / (long long)(! ((int)((unsigned char)-670.06477103) / (
                                                       (int)p + 526)) + 541));
    result = (long)(~ (- v ^ (unsigned long long)p));
  }
  else result = (long)((unsigned int)(! (- p)) * 56643U);
  return result;
}


