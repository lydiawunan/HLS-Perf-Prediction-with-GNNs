#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 298853088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p, char p_4, unsigned long p_9,
                  long long p_11, signed char p_13)
{
  unsigned short v_15;
  int v_7;
  short v;
  unsigned char result;
  v_15 = (unsigned short)p_4;
  result = (unsigned char)p_4;
  v_7 = (int)((unsigned long long)p_13 + ~ (((unsigned long long)v_15 * 18446744073709536703ULL) % (unsigned long long)(
                                            (int)(~ result) + 455)));
  v = (short)(! (- p_11));
  v = (short)((unsigned long)(((57 | (int)((char)9899506198.92)) % 101) * (
                              -67 / ((int)v + 988) >> ((int)v * v_7 & 31))) % (
              4294967204UL % (! p_9 + 312UL) + 315UL));
  result = (unsigned char)(~ ((p / (unsigned int)((int)p_4 + 560)) / 47904U) & (unsigned int)(
                           (int)result | (int)v));
  return result;
}


