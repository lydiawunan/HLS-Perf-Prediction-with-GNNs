#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175418925
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, signed char p_7, short p_11)
{
  double v_9;
  unsigned char v_5;
  long v;
  unsigned short result;
  v_9 = (double)p;
  v_5 = (unsigned char)(0 / (4927 / ((int)((short)v_9) * (int)p_11 + 5) + 932));
  result = (unsigned short)((unsigned long long)v_5 ^ ((unsigned long long)p_7 / 774839632ULL & 93ULL) * (unsigned long long)p_7);
  v = ! 28474L;
  result = (unsigned short)((long long)((-21516L + v) / 71L - (long)result) % (
                            ~ p % (long long)(v + 864L) + 663LL));
  return result;
}


