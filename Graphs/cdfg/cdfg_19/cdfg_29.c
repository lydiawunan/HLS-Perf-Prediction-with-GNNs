#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 553908806
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, float p_7, unsigned long long p_9, unsigned long long p_13)
{
  unsigned long long v_19;
  unsigned short v_17;
  int v_15;
  int v_11;
  unsigned short v_5;
  int v;
  short result;
  v_19 = (unsigned long long)p;
  v_17 = (unsigned short)p_9;
  v_15 = -27250;
  v = (int)p_7;
  result = (short)20353;
  if ((unsigned long long)(- (- (v_15 - (int)v_17))) <= (18446744073709513903ULL - (
                                                         p_13 | (unsigned long long)result)) / (
                                                        v_19 + 657ULL)) {
    v_5 = (unsigned short)(- p_7);
    v = (int)(- ((float)v_5 * p_7) - 6982.f);
    result = result;
  }
  else {
    v_11 = (int)(-3796882944.f + (float)(62 * v - -124));
    result = (short)(~ ((p_9 ^ (unsigned long long)v_11) ^ (p_13 - 18446744073494876446ULL)));
    v = (int)(~ ((unsigned long long)(! p) * p_9));
  }
  if (- (8 % ((int)result + 826) - (int)(~ result)) <= v / -445) result = (short)19527;
  else {
    result = (short)-18919;
    result = (short)((int)(~ result) + (int)result);
  }
  return result;
}


