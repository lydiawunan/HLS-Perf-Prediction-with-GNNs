#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 659744575
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned int p_5, long long p_13,
                  unsigned short p_15, float p_17)
{
  unsigned short v_19;
  long v_11;
  char v_9;
  signed char v_7;
  long v;
  unsigned long result;
  v_19 = (unsigned short)38594;
  v_9 = (char)p_15;
  v_7 = (signed char)p_17;
  v_11 = (long)((float)((unsigned int)(p_17 / ((float)p + 193.f) - -107318.f) / (
                        ((unsigned int)v_19 * p_5) % (unsigned int)((int)p_15 * (int)v_19 + 626) + 372U)) / 380.516296387f);
  result = (unsigned long)(4294906607ULL * (~ (18446744073709505407ULL % (unsigned long long)(
                                               v_11 + 229L)) - (unsigned long long)p_15));
  v = (long)((long long)((((unsigned long)p + (unsigned long)p_5) - (unsigned long)(
                          (int)v_7 * (int)v_9)) - (unsigned long)(- (
                         v_11 * -21L))) + p_13);
  result %= (unsigned long)(v / (p + 962L) + 944L);
  return result;
}


