#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 326603872
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_4, int p_9, short p_11, short p_15)
{
  unsigned short v_17;
  int v_13;
  unsigned long v_7;
  signed char v;
  unsigned long result;
  v_17 = (unsigned short)p_15;
  v_7 = (unsigned long)p_9;
  v_13 = (int)(((unsigned long)(p_9 % -128) * (v_7 + (unsigned long)v_17)) * 229UL);
  v_7 = (unsigned long)((long long)(((int)p_11 * (int)p_11) % (p_9 + 327)) / -446343607872LL + ! (
                        4290LL / (long long)(v_13 + 12) - (long long)p_15));
  v = (signed char)p_9;
  result = ~ ((unsigned long)((47U - p) * (unsigned int)p_4) % ((unsigned long)v * (
                                                                v_7 >> 30) + 289UL));
  return result;
}


