#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058659281
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, char p_5, unsigned long long p_7, double p_15)
{
  char v_13;
  unsigned short v_11;
  long v_9;
  unsigned int v;
  unsigned long long result;
  v_13 = (char)p;
  v_9 = (long)p;
  v = (unsigned int)p_15;
  result = 18446744073458371970ULL;
  v_11 = (unsigned short)(- (! v));
  while ((unsigned long long)((((unsigned int)p + v) >> ((unsigned long long)p_5 * p_7 & 31ULL)) % 3728356434U) > (
         (unsigned long long)(42227LL / (long long)(v_9 + 726L)) * 18446744073709487700ULL | (unsigned long long)(
         ((int)p % ((int)v_11 + 880)) % -84))) {
    v_9 = (int)v_13 / 116;
    v_11 = (unsigned short)p_15;
    result = (unsigned long long)v_11;
    v = (unsigned int)((long long)(~ ((int)p_5 + (int)p_5)) / (1011651439LL / (long long)(
                                                               46 / (
                                                               (int)p_5 + 954) + 657) + 209LL));
  }
  while_0_break: ;
  return result;
}


