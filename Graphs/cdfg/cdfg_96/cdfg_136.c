#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 129323056
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, unsigned int p_5[4], unsigned long p_7[3],
                 unsigned long p_9, unsigned char p_11)
{
  unsigned short v_17;
  long long v_15;
  unsigned long v_13;
  unsigned long v;
  unsigned int result;
  v_17 = (unsigned short)p_11;
  v_15 = (long long)p_9;
  v_13 = 11784UL;
  if (((-37956LL & (long long)v_13) - ! v_15) / 280633978LL != (long long)(- (
      (1.3148058301e+37 - (double)v_17) / 981938684.))) v = (unsigned long)(~ (
                                                            4294967271U - p_5[2])) * p_7[1];
  else v = ~ (- (p_9 * (unsigned long)p_11));
  result = (unsigned int)((unsigned long)((double)(47071ULL & (unsigned long long)p) * -2.16680178389) & v);
  return result;
}


