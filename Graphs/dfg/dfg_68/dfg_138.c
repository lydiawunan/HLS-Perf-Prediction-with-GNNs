#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 472838022
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned long long p_5,
                   unsigned char p_13, signed char p_15, char p_17)
{
  unsigned short v_19;
  int v_11;
  long v_9;
  char v_7;
  char v;
  unsigned short result;
  v_19 = (unsigned short)2884;
  v_11 = (int)p;
  v_9 = (long)p_13;
  v_7 = p_17;
  v_7 = (char)((v_9 / (long)(v_11 + 933)) * (long)(! (58546 / ((int)v_7 + 379))) + (long)(
               - ((int)p_13 / ((int)p_15 + 432)) - - ((int)p_17 << ((int)v_19 & 7))));
  v = (char)(~ (- ((long long)(- v_7) - -3528LL)));
  v = (char)(! (- (((unsigned long)v | 44807UL) ^ 251UL)));
  result = (unsigned short)(! ((unsigned long long)(((unsigned int)p ^ 63319267U) % (unsigned int)(
                                                    ((int)v - -448131104) + 184)) * p_5));
  return result;
}


