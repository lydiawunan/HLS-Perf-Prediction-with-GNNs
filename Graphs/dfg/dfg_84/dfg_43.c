#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785911379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, long long p_9[2][1], unsigned int p_11, char p_13[5])
{
  int v_6;
  long v_4;
  unsigned short v;
  short result;
  v_4 = (long)p_11;
  v = (unsigned short)((float)p_11 * ((float)(- p_13[0]) + -221.748291016f));
  v_6 = (int)(p_9[1][0] | 4294948673LL);
  result = (short)(-21227LL - ~ ((long long)v_4 + 360794134LL) / (long long)(
                              ((long)(- v_6) - - p) + 549L));
  result = (short)(! (! (- ((int)result & (int)v))));
  return result;
}


