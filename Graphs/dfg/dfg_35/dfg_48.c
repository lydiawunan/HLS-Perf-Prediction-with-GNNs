#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 607718750
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned long long p_4[4][1][3], double p_7,
        unsigned int p_9)
{
  signed char v_11;
  unsigned long v;
  int result;
  v = 9991UL;
  result = (int)p_9;
  v_11 = (signed char)(~ (- (- ((unsigned int)result | p_9))));
  v = (unsigned long)(~ (! (((unsigned long long)v / 741037178ULL) * (unsigned long long)(
                            p_9 - (unsigned int)v_11))));
  result = (int)p;
  result = (int)(! (((p - p) >> (- p_4[2][0][1] & 63ULL)) % (long long)(
                    ((v + (unsigned long)p_7) - (unsigned long)(result % (
                                                                result + 381))) + 684UL)));
  return result;
}


