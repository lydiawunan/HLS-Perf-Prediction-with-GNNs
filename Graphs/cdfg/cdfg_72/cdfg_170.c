#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569562997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned long long p_4, long long p_7,
                  long long p_9, unsigned long long p_11)
{
  unsigned int v_23;
  char v_21;
  unsigned char v_19;
  unsigned long long v_17;
  long v_15;
  unsigned long v_13;
  unsigned long v;
  unsigned char result;
  v_21 = (char)-17;
  v_19 = (unsigned char)p_11;
  v_17 = (unsigned long long)p_9;
  v_15 = (long)p_9;
  while (27500LL < ! (p_9 * 6675LL >> ((int)v_19 & 63))) {
    v_13 = (int)v_21 * 24095;
    v_21 = (char)(-77LL * - (~ p_9));
    v_23 = (unsigned int)((295297358ULL + p_4 / (p_11 + 795ULL)) + (unsigned long long)(
                          ! p_9 / (long long)(122UL / (v_13 + 474UL) + 443UL)));
    v_19 = (unsigned char)(! (p_11 + v_17) * (unsigned long long)((long long)(- v_23) * (
                                                                  (long long)p & p_9)));
  }
  while_0_break: ;
  if ((unsigned long long)v_15 * (p_4 / (v_17 + 644ULL) - (unsigned long long)(
                                  723896918LL + p_7)) != ((p_4 % 1054987148ULL) % 30829ULL) % (unsigned long long)(
                                                         (96LL + (p_7 | 373141697LL)) + 921LL)) 
    result = (unsigned char)p;
  else {
    v_13 = (unsigned long)p_4;
    v = (unsigned long)((p_7 / 1065LL << (p_4 / (unsigned long long)(
                                          p_9 + 873LL) & 63ULL)) >> (
                        ((unsigned long long)2.34159556107e+38 + p_11) * (unsigned long long)v_13 & 63ULL));
    result = (unsigned char)(! (! p_4 % (unsigned long long)(! v + 780UL)));
  }
  return result;
}


