#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 630067932
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned long p_7, signed char p_9, long long p_11,
          unsigned char p_13)
{
  unsigned long long v_15;
  int v_5;
  unsigned short v;
  short result;
  v_15 = 18446744073709536780ULL;
  v_15 = (unsigned long long)p_11 | ((unsigned long long)(24LL / (21514LL % (
                                                                  p_11 + 973LL) + 609LL)) + ~ (! v_15));
  v_5 = (int)((unsigned long long)p_11 * ! v_15);
  v = (unsigned short)(! ((long long)(214 + (int)p_9) - ~ p_11) * (long long)(
                       (int)(- (- p_13)) * (int)p_9));
  result = (short)(((unsigned long)(~ (p + (unsigned int)v)) / ((unsigned long)(- v_5) / (
                                                                p_7 / 574UL + 619UL) + 901UL)) % 41UL);
  return result;
}


