#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1020911593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p[1], char p_4, long long p_7, unsigned long p_9, short p_11)
{
  char v_13;
  unsigned long v;
  int result;
  v_13 = (char)-47;
  v = (unsigned long)(p_7 & (long long)v_13);
  result = (int)(~ (- (3844762694UL - (unsigned long)p_11 % (p_9 + 630UL))));
  v = (unsigned long)((long long)v * (! (p_7 % (long long)(p_9 + 997UL)) % (
                                      (long long)((float)(result << 28) + 6925892096.f) + 635LL)));
  result = (int)(! ((unsigned long)((long)result + p[0]) + ((unsigned long)p_4 + v)) ^ 4294944735UL);
  return result;
}


