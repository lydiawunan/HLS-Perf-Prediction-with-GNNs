#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 132363174
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned int p_7, unsigned int p_9)
{
  long v_5;
  unsigned short v;
  int result;
  v_5 = 195L;
  v = (unsigned short)((-48LL - (((long long)-2.3903114657e+38 << 26LL) - (long long)(~ p_7))) * (long long)(- (
                       (unsigned long)(v_5 - v_5) * (unsigned long)p_9)));
  result = (int)v / ((int)p + 404) << (((unsigned long)(v_5 + 205L) % (unsigned long)(
                                        51659U * p_7 + 483U)) % ((unsigned long)(
                                                                 p_9 + 4294902916U) + 1022UL) & 31UL);
  return result;
}


