#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 776486343
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, int p_7, long p_9,
                   unsigned long long p_11, unsigned long p_13)
{
  unsigned int v_15;
  char v_4;
  long long v;
  unsigned short result;
  v_15 = (unsigned int)p;
  result = (unsigned short)27217;
  v_15 = - v_15;
  v = (long long)((! p_11 ^ (unsigned long long)(- ((unsigned long)p_7 + p_13))) % 611ULL);
  v_4 = (char)((unsigned long)(~ p_7) - ! ((unsigned long)((int)result ^ -19776) % (
                                           (unsigned long)p_9 * 796170719UL + 612UL)));
  result = (unsigned short)(32341LL - - (v % (long long)((int)v_4 + 756) - (long long)p));
  return result;
}


