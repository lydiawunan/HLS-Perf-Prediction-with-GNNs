#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 499289862
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, long long p_9, int p_11)
{
  unsigned char v_13;
  unsigned char v_6;
  long v_4;
  short v;
  unsigned char result;
  v_13 = (unsigned char)p_9;
  v_6 = (unsigned char)p_9;
  if (p_11 <= -65 - ! ((int)v_13 + -64924)) {
    v_4 = (long)(950 / ((int)(! v_6) + 916) - (int)p);
    v = (short)(- (- (6527655630.17 + (double)v_4)));
    result = (unsigned char)(23800ULL * (unsigned long long)((long long)(
                                                             3632191757UL * (unsigned long)v) * 93961168LL));
  }
  else result = (unsigned char)(~ (- (~ (unsigned short)4664)));
  result = ~ result;
  return result;
}


