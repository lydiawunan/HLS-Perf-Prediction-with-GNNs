#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77115100
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned long long p_4, unsigned char p_6,
                       unsigned short p_8, unsigned long long p_11)
{
  float v;
  unsigned long long result;
  v = 381.050506592f;
  result = ((6ULL + (unsigned long long)((int)p_8 & (int)((unsigned short)v))) + 
            18446744072990142155ULL * (p_11 * p_11)) << 55;
  result = result;
  result = (unsigned long long)(((-567577217LL + (long long)p) / 818LL) * (long long)(- (
                                (int)((unsigned char)-4475450485.05) & 203))) ^ 
           ((unsigned long long)(~ p) - 30898ULL % (p_4 + 867ULL)) * (unsigned long long)(
           (int)((unsigned char)(-788.90234375f + (float)result)) >> (
           (int)(! p_6) & 7));
  result = result;
  return result;
}


