#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147274166
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, long long p_11)
{
  double v_13;
  unsigned long long v_9;
  signed char v_7;
  signed char v_4;
  unsigned long v;
  int result;
  v_13 = -2163237456.22;
  v_9 = 18446744073105074959ULL;
  v_7 = (signed char)54;
  v = 4294912420UL;
  v_4 = (signed char)(- (- (~ 1063189831UL)));
  v_4 = (signed char)((unsigned long long)(! v_7) % (((unsigned long long)(
                                                      109 / ((int)v_4 + 275)) ^ ~ v_9) / (unsigned long long)(
                                                     (~ p_11 - (long long)(- v_13)) + 554LL) + 595ULL));
  v = ! v % (unsigned long)((int)v_4 % (-59 % ((64276 + (int)((unsigned short)p)) + 793) + 732) + 50);
  result = (int)v;
  return result;
}


