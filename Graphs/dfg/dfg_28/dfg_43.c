#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 43726594
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, int p_4, unsigned char p_9[2])
{
  long long v_13;
  short v_11;
  unsigned char v_7;
  long v;
  unsigned long long result;
  v_11 = (short)-21953;
  v_13 = -578709354LL;
  v_7 = (unsigned char)(-321.879564627 - (double)(- v_13));
  v = (long)((unsigned long)(- v_7) / (p % (unsigned long)((long)(! p_9[0]) / (
                                                           -276201528L / (long)(
                                                           (int)v_11 + 429) + 954L) + 615L) + 320UL));
  result = (unsigned long long)p | (unsigned long long)p % (((unsigned long long)p_4 + 
                                                             (unsigned long long)v * 1002276994ULL) + 18ULL);
  return result;
}


