#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 230517317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p[1][3][4], unsigned long long p_9, long p_11, int p_13,
              unsigned int p_15)
{
  long v_19;
  double v_17;
  short v_6;
  unsigned short v_4;
  unsigned int v;
  long long result;
  v_19 = (long)p[0][1][0];
  v_17 = (double)p_15;
  v = (unsigned int)p[0][1][2];
  v = (unsigned int)((unsigned long long)((-201LL + 9476LL / (long long)(
                                                    v + 529U)) / (long long)(
                                          (((long)v_17 - v_19) + - p_11) + 828L)) * (
                     ~ (p_9 & 18446744073709551525ULL) * 12761ULL));
  v_6 = (short)(((((unsigned long)p_13 & 3728326044UL) * 4294967192UL) * (unsigned long)p_15) % 42912UL);
  v_4 = (unsigned short)(~ (((unsigned long)(p_11 / -278L) / (unsigned long)(
                             v + 684U)) % (unsigned long)(~ (p_11 % (
                                                             p_11 + 778L)) + 35L)));
  result = (long long)(~ ((unsigned long long)((unsigned long)(v | 89U) & 
                                               3528931668UL % (unsigned long)(
                                               (int)v_4 + 254)) + ((unsigned long long)(
                                                                   (int)v_6 & p[0][0][0]) + 
                                                                   p_9 % (unsigned long long)(
                                                                   p_11 + 747L))));
  return result;
}


