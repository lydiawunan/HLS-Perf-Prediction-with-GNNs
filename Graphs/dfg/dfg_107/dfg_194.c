#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985371461
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, short p_9[2], unsigned long long p_11,
                       long p_15, double p_17)
{
  signed char v_13;
  int v_6;
  unsigned long v_4;
  unsigned char v;
  unsigned long long result;
  v_13 = (signed char)p_17;
  v_6 = (int)(- (char)-7);
  v_4 = (unsigned long)((p_11 % (unsigned long long)((int)v_13 + 565) + (unsigned long long)p_9[1]) + (unsigned long long)(
                        -102L * (- p_15 >> (((int)((short)p_17) + (int)p_9[1]) & 31))));
  v = (unsigned char)((int)p_9[0] % ((int)p_9[0] + 1013));
  result = (unsigned long long)v + (unsigned long long)(~ (v_4 | (unsigned long)v_6)) * (
                                   (unsigned long long)p % ((50543ULL & (unsigned long long)v) + 1010ULL));
  return result;
}


