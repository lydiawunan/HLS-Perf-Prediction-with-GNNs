#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058669985
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, unsigned long long p_9)
{
  long long v_7;
  double v_4;
  unsigned short v;
  unsigned short result;
  v = (unsigned short)56225;
  v = (unsigned short)(! (18446744073709525901ULL ^ (unsigned long long)(
                          (long long)v * -778525496LL)) / (p_9 + 1016ULL));
  v_4 = (double)-289121864L;
  v_7 = 590612288LL;
  result = (unsigned short)(~ ((int)v % ((int)((unsigned short)(v_4 / (
                                                                (double)p + 37.))) + 931)) - (int)(
                            (float)(v_7 >> 46) - -2.94337719696e+38f));
  return result;
}


