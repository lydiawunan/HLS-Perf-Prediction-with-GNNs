#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 613544867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned char p_9, long p_15)
{
  signed char v_13;
  unsigned char v_11;
  unsigned char v_7;
  double v_4;
  long long v;
  long long result;
  v_13 = (signed char)p_9;
  v_11 = (unsigned char)129;
  v = (long long)p_9;
  v_7 = (unsigned char)((long long)((long)v_13 | p_15) - v);
  v = (long long)(- ((double)v_7 / 1682.19235103) - (double)(18446744073709528491ULL % (unsigned long long)(
                                                             (p / (long long)(
                                                              (int)p_9 + 174)) / (long long)(
                                                             (int)(! v_11) + 878) + 486LL)));
  v_4 = (double)939.686096191f;
  result = ! ((v / 3849615454LL + 1031746160LL) % ((long long)(- (v_4 + (double)p)) + 740LL));
  return result;
}


