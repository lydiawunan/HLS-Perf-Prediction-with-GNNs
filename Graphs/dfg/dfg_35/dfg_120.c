#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859397954
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, double p_7, short p_9, double p_11, int p_13[3][3])
{
  long v_17;
  char v_15;
  unsigned long long v_5;
  unsigned char v;
  int result;
  v_17 = (long)p_13[2][1];
  v_5 = 40334ULL;
  v = (unsigned char)82;
  v_15 = (char)(~ (~ v));
  v = (unsigned char)(((unsigned long long)p * v_5 + (unsigned long long)(
                       p + 4294967278UL)) % ((18446744073651590397ULL + (unsigned long long)p_7) % (unsigned long long)(
                                             (int)p_9 * (int)((short)p_11) + 323) + 698ULL) + (unsigned long long)(
                      (long long)(p_13[0][1] * (int)v_15 | -21) & (long long)(
                                                                  v_17 * -3081L) * (
                                                                  (long long)p_11 + -114762974LL)));
  result = (int)(~ v);
  return result;
}


