#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025088861
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, long long p_5, long p_11)
{
  long long v_9;
  long v_7;
  unsigned char v;
  long result;
  v_9 = (long long)(~ (! ((int)(1525451136.f + (float)p_11) + 29107)));
  v_7 = (long)(~ (! (-1023LL * p_5) - v_9 / ((long long)p % (v_9 + 446LL) + 852LL)));
  v = (unsigned char)(~ (18446744073709537773ULL * (unsigned long long)(! p)) >> (
                      (27447ULL / (unsigned long long)(p_5 + 655LL)) / (unsigned long long)(
                      (210626926UL - (unsigned long)(! v_7)) + 994UL) & 63ULL));
  result = (long)v;
  return result;
}


