//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 350084464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, short p_5, unsigned short p_9,
                       unsigned long long p_11, float p_13)
{
  unsigned short v_7;
  unsigned int v;
  unsigned long long result;
  v_7 = (unsigned short)((15493ULL - ((unsigned long long)p_9 ^ p_11)) / (
                         (unsigned long long)((int)p_5 + (int)((short)p_13)) / (
                         (p_11 + (unsigned long long)p_13) + 438ULL) + 724ULL) + 34039ULL);
  result = (unsigned long long)(- (((int)((short)(p + 4.f)) % ((int)(~ p_5) + 109)) % (
                                   (int)v_7 + 511)));
  v = (unsigned int)result;
  result = (unsigned long long)(~ (-185116161LL >> (~ (121U / (v + 66U)) & 63U)));
  return result;
}


