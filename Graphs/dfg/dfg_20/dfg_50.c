#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 742697240
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p, char p_7, float p_13[5][3][3], float p_15[2],
         int p_17)
{
  unsigned int v_11;
  unsigned short v_9;
  long v_5;
  unsigned int v;
  char result;
  v_9 = (unsigned short)p_17;
  v = (unsigned int)(p_15[0] / ((float)(- (~ (~ p_17))) + 802.f));
  v_11 = (unsigned int)p;
  v_5 = (long)(- (((unsigned int)v_9 * v_11) % 4U << ((unsigned int)p_13[3][1][2] & 31U)));
  result = (char)((unsigned long long)v % (! ((41317ULL - p) - (unsigned long long)(
                                              v_5 * (long)p_7)) + 904ULL));
  return result;
}


