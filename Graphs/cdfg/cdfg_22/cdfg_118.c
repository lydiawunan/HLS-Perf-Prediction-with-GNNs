#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 608936910
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long long p_4, long long p_6, int p_8[4],
                   unsigned short p_10)
{
  long long v_17;
  long long v_15;
  short v_13;
  long long v;
  unsigned short result;
  v_17 = (long long)p;
  v_15 = -386228041LL;
  v_13 = (short)-2220;
  v = (long long)p_10;
  result = (unsigned short)49523;
  while ((long)v_13 != (long)p * -54114L) {
    result = v_15 ^ -2174LL;
    v_15 = ((long long)(p_8[0] % ((int)result + 621)) - p_6 / (long long)(
                                                        (int)p_10 + 42)) - (
           v_17 / (p_6 + 317LL) << ((int)(! p_10) & 63));
    v = (long long)(- (- (- p)));
    v_13 = (short)p;
  }
  while_0_break: ;
  if (-10216LL == ! ((long long)p_10 * v) / (long long)((int)v_13 + 102)) 
    result = (unsigned short)2603;
  else {
    result = (unsigned short)p_6;
    result = (unsigned short)((long long)((int)((unsigned short)p) << (
                                          (int)(~ result) & 15)) / (! (
                                                                    p_4 % 944044195LL) + 643LL));
  }
  return result;
}


