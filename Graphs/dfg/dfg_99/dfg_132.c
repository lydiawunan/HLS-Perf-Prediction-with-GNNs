#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311950866
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned int p_7, char p_9, long p_11,
          long long p_13[3])
{
  signed char v_15;
  unsigned short v_5;
  unsigned char v;
  short result;
  v_15 = (signed char)-103;
  v_5 = (unsigned short)v_15;
  v = (unsigned char)((9608LL - ~ p / (long long)(((int)v_5 + -1147) + 515)) % (
                      (long long)((unsigned long)(p_7 - (unsigned int)p_9) & (unsigned long)(! p_11)) / (
                      - (p_13[1] | p_13[2]) + 748LL) + 351LL));
  result = (short)v;
  return result;
}


