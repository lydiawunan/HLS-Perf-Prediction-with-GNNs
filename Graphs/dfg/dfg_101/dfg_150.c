#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 883825701
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, signed char p_9, long long p_11)
{
  unsigned char v_7;
  unsigned char v_4;
  double v;
  unsigned long long result;
  result = 18446744073709542952ULL;
  v_4 = (unsigned char)(- (- 945.700968327));
  v_7 = (unsigned char)((0 - (result / (unsigned long long)((int)p + 623)) * result) >> (
                        ((unsigned long long)(((unsigned int)p_9 | 655608859U) % 4294967255U) | (
                         (unsigned long long)p_11 + ! result)) & 63ULL));
  v = (double)(! (- v_7));
  result = (unsigned long long)(! (((unsigned int)v + ((unsigned int)v_4 - 4294956509U)) & (unsigned int)(~ (- p))));
  return result;
}


