#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 696602914
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, long p_7[5][1][3], int p_9[5],
                  unsigned long long p_11)
{
  unsigned short v_15;
  long v_13;
  unsigned short v_5;
  float v;
  unsigned char result;
  v_13 = p_7[0][0][1];
  v_5 = (unsigned short)p_9[3];
  v = (float)p_9[4];
  v_15 = (unsigned short)(- (- v * (float)(- p)) / 14461000.f);
  v = (float)((unsigned long long)((20996L * (p_7[3][0][1] - (long)p_9[3])) % (
                                   (long)v + 456L)) * ! ((p_11 - (unsigned long long)v_13) | (unsigned long long)(~ v_15)));
  result = (unsigned char)(- v * (float)(! (! ((int)v_5 ^ 2))));
  result = (unsigned char)(! (-21299LL * (long long)result) | (long long)(
                           -78L * ! p));
  return result;
}


