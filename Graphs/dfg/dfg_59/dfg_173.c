#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1057305118
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, signed char p_7[3][1][5], short p_9, char p_15)
{
  int v_19;
  unsigned short v_17;
  long long v_13;
  unsigned long long v_11;
  int v_5;
  long long v;
  unsigned int result;
  v_19 = (int)p_9;
  v_17 = (unsigned short)12968;
  v_5 = (int)p;
  v = -29563LL;
  v_11 = (unsigned long long)(! (! ((v * -9785LL) % (long long)(! v_5 + 490))));
  v_13 = (long long)((unsigned long)(~ ((long)v_17 | (long)v_19 * 747981583L)) / (unsigned long)(
                     4294967170U / ((unsigned int)p_15 * (4294952401U ^ (unsigned int)v_5) + 443U) + 219U));
  v_5 = (int)(65535LL / ((v_13 | (long long)p_15) + 827LL));
  result = (unsigned int)((unsigned long long)(v - (long long)((206 >> 1) / (
                                                               (int)p + 930))) * (
                          (unsigned long long)(- v_5 - 106) + ((unsigned long long)(
                                                               55947UL * (unsigned long)p_7[0][0][3]) - 
                                                               (unsigned long long)p_9 * v_11)));
  return result;
}


