#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 965917443
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, long long p_4, unsigned char p_9,
          unsigned char p_13, long long p_15)
{
  unsigned int v_11;
  unsigned long long v_7;
  unsigned short v;
  short result;
  v_11 = (unsigned int)p;
  v = (unsigned short)37876;
  v = (unsigned short)((long long)p_9 | (long long)(v_11 + (unsigned int)p_13) * (
                                        ! p_15 + (long long)v * p_15));
  result = (short)p_9;
  v_7 = (unsigned long long)(- result);
  result = (short)((unsigned long long)(4294924554UL * (unsigned long)(- (- p))) - 
                   (unsigned long long)((p_4 & (long long)v) ^ (p_4 + 45140LL)) / (
                   (18446744073709551543ULL - v_7 % (unsigned long long)(
                                              (int)p_9 + 592)) + 669ULL));
  return result;
}


