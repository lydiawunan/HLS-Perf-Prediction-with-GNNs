#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176248962
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, signed char p_4, double p_15,
              unsigned long long p_17)
{
  unsigned int v_19;
  long v_13;
  int v_11;
  long long v_9;
  unsigned char v_7;
  float v;
  long long result;
  v_19 = p;
  v_13 = 65457L;
  v_11 = 519022415;
  v_7 = (unsigned char)173;
  v_13 = (long)((unsigned long long)v_13 / ((p_17 / 51255ULL) / ((~ p_17 - 55ULL) + 188ULL) + 300ULL));
  v_9 = (long long)(- (p_15 - (double)p_4) / ((double)(p_17 % (unsigned long long)(
                                                       v_19 + 674U)) + 66.) + (double)v_19);
  v = (float)(! p_4);
  result = (long long)(! (p * (unsigned int)p_4)) / (((long long)((int)((unsigned char)v) * (int)v_7) - (
                                                      -635LL & v_9)) * (long long)(
                                                     v_11 >> (! v_13 & 31L)) + 597LL);
  return result;
}


