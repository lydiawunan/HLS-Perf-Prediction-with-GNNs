#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 127484030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned long long p_4,
                  unsigned long p_6[3][1][3], unsigned long long p_8,
                  signed char p_11[2])
{
  signed char v_17;
  unsigned long long v_15;
  long long v_13;
  unsigned long v;
  unsigned char result;
  v_15 = p_8;
  v_13 = -206697206LL;
  v_17 = (signed char)1;
  if (~ ((unsigned long long)v_13 * p_8) <= (p_4 - v_15 % (unsigned long long)(
                                                   (int)v_17 + 827)) / (
                                            18446744073709526397ULL * ~ p_4 + 938ULL)) 
    result = (unsigned char)p;
  else {
    v = (unsigned long)(- (((unsigned long long)p_11[0] - 18446744072879400829ULL) ^ (unsigned long long)(
                           55323 * (int)((unsigned short)3418819840.f))));
    result = (unsigned char)v;
    result = (unsigned char)(- ((p_4 - (unsigned long long)p_6[2][0][2]) >> (
                                (p_8 | (unsigned long long)result) & 63ULL)));
  }
  return result;
}


