#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 472444944
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, long p_4, unsigned int p_6, long p_9,
                  double p_13[4][3][2])
{
  unsigned short v_17;
  short v_15;
  unsigned char v_11;
  unsigned long long v;
  unsigned long result;
  v_17 = (unsigned short)32263;
  v_15 = (short)p_6;
  v_11 = (unsigned char)(! (- v_17));
  result = (unsigned long)((-3918503168. * (689.635795515 / ((p_13[1][2][0] - p_13[1][1][0]) + 307.))) * (double)(~ (- v_15)));
  v = (unsigned long long)((int)v_11 / -177);
  result = (unsigned long)(- ((unsigned long long)((result + 131162287UL) / (unsigned long)(
                                                   (p + p_4) + 852L)) * (
                              ((unsigned long long)p_6 ^ v) % (unsigned long long)(
                              p_9 + 948L))));
  return result;
}


