#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 934831198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, long p_4, short p_6[2], long long p_13,
                  unsigned long p_15)
{
  unsigned short v_11;
  unsigned int v_9;
  int v;
  unsigned long result;
  v_9 = (unsigned int)(! (- p_13) % (long long)(- (2724UL % (87UL / (
                                                             p_15 + 590UL) + 920UL)) + 215UL));
  v = (int)p_6[0];
  v_11 = (unsigned short)(~ p);
  result = (((unsigned long)p / 4294926239UL & (unsigned long)p_4) / (unsigned long)(
            (int)p_6[1] + 436)) % (~ ((unsigned long)((long)v - p_4) & (unsigned long)(
                                      v_9 - (unsigned int)v_11)) + 990UL);
  return result;
}


