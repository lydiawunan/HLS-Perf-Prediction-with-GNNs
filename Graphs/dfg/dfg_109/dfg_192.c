#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 891349419
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned long long p_5, unsigned int p_9,
                 double p_13[1], long long p_17)
{
  char v_15;
  double v_11;
  long v_7;
  char v;
  unsigned int result;
  v_15 = (char)p;
  v_7 = -79532373L;
  v = (char)(! p_17 + -1LL);
  v_11 = (double)((unsigned long)(- (- v)) / (! ((unsigned long)(v_7 & 22823L) + 61289985UL) + 222UL));
  v = (char)(((p >> (p_5 & 63ULL)) % (long long)((unsigned long)v_7 % (unsigned long)(
                                                 p_9 + 143U) + 746UL) + (long long)(- (
              (double)v_7 * v_11))) % (long long)((-1823531733L + (long)(
                                                   p_13[0] + (double)(
                                                   (int)v_15 / 58968))) + 761L));
  result = (unsigned int)v;
  return result;
}


