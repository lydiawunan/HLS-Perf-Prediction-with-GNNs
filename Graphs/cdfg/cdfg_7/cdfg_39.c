#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 798261472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, int p_5, double p_7, char p_9[3])
{
  unsigned int v_11;
  long long v;
  unsigned char result;
  v_11 = (unsigned int)p;
  if (- p_7 > (double)(- (! ((unsigned int)p_9[1] * v_11)))) v = (long long)(
                                                             -28850 % (
                                                             p_5 + 563) + -13695);
  else v = (long long)(! p_5);
  result = (unsigned char)(((unsigned long long)v % (347717658ULL / (unsigned long long)(
                                                     v + 713LL) + 483ULL)) % (unsigned long long)(
                           (422800268LL + (long long)((int)p & 51093)) + 14LL));
  return result;
}


