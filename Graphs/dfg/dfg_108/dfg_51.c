#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432027191
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned long p_7, unsigned long p_9)
{
  unsigned char v_5;
  signed char v;
  short result;
  v = (signed char)113;
  v_5 = (unsigned char)(- (((112UL + p_7) >> (4294967280UL * p_9 & 31UL)) & (
                           (unsigned long)v - p_7)));
  result = (short)((unsigned long long)(p / (unsigned long)((int)(! v) + 467)) * (
                   18446744073487090459ULL * (unsigned long long)((unsigned long)v_5 ^ p_7)) & 18446744073709491494ULL);
  return result;
}


