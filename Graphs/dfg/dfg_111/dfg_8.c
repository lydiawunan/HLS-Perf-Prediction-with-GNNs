#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591277682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned short p_7, long long p_9,
          unsigned int p_11, short p_13)
{
  char v_15;
  long v_5;
  long v;
  short result;
  v_15 = (char)p_7;
  result = (short)((- (60601LL / (p_9 + 811LL)) % (long long)((p_11 / (unsigned int)(
                                                               (int)p_13 + 833) ^ (unsigned int)v_15) + 653U)) % 876LL);
  v_5 = (long)(11669LL / (~ (959LL + (long long)result) + 153LL));
  v = ! ((long)p - v_5) % (long)(((int)(- (! p_7)) << ((13578ULL | (unsigned long long)p_7) & 15ULL)) + 77);
  result = (short)((long long)(! v * 1269L) + -4LL);
  return result;
}


