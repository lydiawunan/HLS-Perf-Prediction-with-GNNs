#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 859468390
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p)
{
  short v_15;
  unsigned char v_13;
  double v_11;
  signed char v_9;
  long long v_6;
  long long v_4;
  unsigned int v;
  int result;
  v_13 = (unsigned char)25;
  v_11 = (double)p;
  v_9 = (signed char)p;
  v = (unsigned int)p;
  result = (int)p;
  v_15 = (short)15708;
  v_6 = (long long)((unsigned long)(-229784580L - (long)((double)((int)v_9 / (
                                                                  (int)((signed char)1.98938148616e+38f) + 870)) - v_11)) % (
                    ((unsigned long)(! v_13) + - ((unsigned long)v_15 * p)) + 281UL));
  v_4 = ~ (! (! ((long long)p / -799379940LL)));
  result = (int)(! ((long long)(! result) / (((long long)v ^ v_4) + 1014LL) - (
                    (v_6 - -62LL) + (long long)(~ p))));
  return result;
}


