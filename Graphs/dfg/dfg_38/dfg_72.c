#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97602022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, int p_4, short p_7, int p_13,
                 unsigned long long p_15)
{
  long long v_21;
  float v_19;
  long v_17;
  signed char v_11;
  short v_9;
  int v;
  unsigned int result;
  v_21 = 55189LL;
  v_19 = 7988707328.f;
  v_17 = (long)p;
  v_11 = (signed char)(- ((double)(p_15 | 18446744073709551551ULL) * (
                          -3442278662.1 / ((double)v_17 + 819.))) * (double)(
                       (float)((int)p_7 >> (p_13 & 15)) * ((float)p_7 * v_19) - (float)v_21));
  v_9 = (short)p_13;
  v = ((int)v_9 - ! ((int)v_11 * (int)((signed char)-1.48588422166e+38))) + 695;
  result = (unsigned int)(- (((long long)p | 1911LL) * (long long)(p_4 - p_4) - (long long)(
                             (v & -66) % ((int)p_7 + 687))));
  return result;
}


