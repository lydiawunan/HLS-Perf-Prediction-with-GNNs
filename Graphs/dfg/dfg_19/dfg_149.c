#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 874833250
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p, unsigned char p_4, short p_6, char p_13,
              unsigned long p_15[4])
{
  signed char v_17;
  short v_11;
  long long v_9;
  char v;
  long long result;
  v_17 = (signed char)26;
  v_11 = (short)p_15[1];
  result = (long long)p_15[1];
  v_9 = ((long long)((int)v_11 * (int)p_13) - ((long long)p_15[0] / (
                                               result + 814LL) + (long long)(! p_6))) + (long long)(- (
        (p * 43UL) / (unsigned long)((int)v_17 * (int)p_13 + 697)));
  v = (char)-117;
  result = ! ((long long)(- (51062 | (int)p_4)) + ((long long)((int)p_6 | (int)v) - (
                                                   579506336LL ^ v_9)));
  result &= (long long)p;
  return result;
}


