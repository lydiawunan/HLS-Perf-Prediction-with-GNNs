#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548295231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, float p_4, unsigned long long p_7[2][5],
                  int p_11, unsigned long long p_13)
{
  long long v_17;
  unsigned long v_15;
  unsigned long long v_9;
  signed char v;
  unsigned long result;
  v_17 = (long long)p_11;
  v_15 = 823187169UL;
  v = (signed char)p_7[1][3];
  result = 3555503251UL;
  v_15 = (unsigned long)((unsigned long long)(- v_15 - v_15 * ((unsigned long)v - p)) & (
                         (p_7[0][2] / 45ULL) % (unsigned long long)(result + 821UL) | 18446744073511218424ULL));
  v = (signed char)((long long)(~ (-62045 & (-89 ^ (int)v))) * ((long long)result + 
                                                                ((long long)v_15 % (
                                                                 v_17 + 535LL)) / (long long)(
                                                                (v_15 + (unsigned long)p_11) + 736UL)));
  v_9 = (unsigned long long)p + (47ULL % ((p_13 - (unsigned long long)p_4) + 856ULL) + (unsigned long long)(
                                 249473631U - (unsigned int)(p_4 / 6001708544.f)));
  result = (unsigned long)(((unsigned long long)p - (((unsigned long long)p - 11631ULL) - (unsigned long long)p_4)) - (
                           ((unsigned long long)v - (p_7[0][3] & v_9)) + (unsigned long long)p_11));
  return result;
}


