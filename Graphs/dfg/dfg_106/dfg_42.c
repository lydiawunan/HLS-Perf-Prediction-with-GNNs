#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126406439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, long long p_5, short p_7, int p_11,
          unsigned char p_13)
{
  unsigned char v_17;
  long long v_15;
  int v_9;
  unsigned short v;
  short result;
  v_17 = (unsigned char)p_11;
  v_15 = (long long)p_7;
  v_9 = (int)(- (683650517LL - (- v_15 ^ (long long)((unsigned long)v_17 / (
                                                     p + 636UL)))));
  result = (short)(~ (~ p_11 - (int)p_13 * v_9) / (! (((int)p_7 % 20538) * (int)3.29491387329e+38) + 388));
  v = (unsigned short)((-84LL + (p_5 - (long long)p_7) * (long long)(! result)) - (long long)(~ v_9));
  result = (short)(((unsigned long)(~ (! v)) - ~ p) + (unsigned long)v);
  return result;
}


