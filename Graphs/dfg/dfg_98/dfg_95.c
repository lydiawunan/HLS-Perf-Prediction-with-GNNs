#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 424949425
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, char p_13, long p_15)
{
  unsigned long long v_10;
  long v_8;
  signed char v_6;
  unsigned char v_4;
  long long v;
  unsigned char result;
  v_10 = (unsigned long long)p;
  v_8 = (long)p_13;
  v_4 = (unsigned char)p_15;
  result = (unsigned char)193;
  v = (long long)(~ (p / (p + 264UL)) * - (~ p) - (unsigned long)((long)(
                                                                  (int)p_13 / (
                                                                  205 * (int)v_4 + 849)) ^ p_15));
  v_4 = (unsigned char)384.440612793f;
  v_6 = (signed char)(18446744072775909847ULL * ((unsigned long long)v_8 * v_10 | (unsigned long long)result));
  result = (unsigned char)(v << (((unsigned long)v_4 ^ (unsigned long)(- v_6) / 3291930283UL) & 63UL));
  return result;
}


