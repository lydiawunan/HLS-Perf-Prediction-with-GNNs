#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254149697
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned short p_11)
{
  long v_13;
  unsigned short v_9;
  unsigned long v_7;
  int v_5;
  short v;
  unsigned char result;
  v_9 = p_11;
  v_7 = (unsigned long)p_11;
  v = (short)p;
  v_5 = -87;
  v_13 = (long)(991.66217041 / (((double)(! p) / 4073261044.18 - -5930834944.) + 845.));
  v_7 = ~ ((- v_7 + (unsigned long)((long)p_11 % (v_13 + 792L))) + 232UL);
  result = (unsigned char)((unsigned long long)((unsigned long)((int)v % (
                                                                ((int)p + v_5) + 634)) / (
                                                (v_7 - 120UL) % 24230UL + 69UL)) + 
                           (unsigned long long)(((int)v_9 * (int)p_11) / -38) / (
                           ((unsigned long long)v_13 % 18446744073709539405ULL & 18446744073019087125ULL) + 954ULL));
  return result;
}


