#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487270231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, short p_5, float p_7,
                  unsigned short p_13, unsigned long long p_17)
{
  unsigned long long v_15;
  long long v_11;
  long v_9;
  unsigned int v;
  unsigned char result;
  v_15 = (unsigned long long)p_7;
  v = (unsigned int)p;
  result = (unsigned char)p_17;
  v_11 = (long long)((- (v_15 - v_15) + (unsigned long long)result) % (
                     ~ p + 577ULL));
  v_9 = (long)(~ (0LL - (v_11 % (v_11 + 801LL) + (long long)p_13)));
  result = (unsigned char)((((unsigned long long)1.62652431057e+38f / (
                             p + 291ULL) - 18446744073709549503ULL) & (unsigned long long)(- (- v))) * (unsigned long long)(
                           (long)p_5 - ((long)(p_7 / 58449.f) >> (- v_9 & 31L))));
  return result;
}


