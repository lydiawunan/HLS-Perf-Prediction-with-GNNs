#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 492833467
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, long long p_7, long p_9[5])
{
  unsigned short v_4;
  short v;
  unsigned short result;
  v = (short)(-4391329LL + p_7);
  v = (short)((212ULL % ((unsigned long long)p_7 % 65277ULL + 1023ULL) >> (
               ~ (4294957363UL - (unsigned long)p_9[2]) & 63UL)) * (unsigned long long)(
              (int)v % 215));
  v_4 = (unsigned short)p;
  result = (unsigned short)(- (1016147911UL % (unsigned long)((int)(- v) + 655)) * (unsigned long)(~ v_4));
  return result;
}


