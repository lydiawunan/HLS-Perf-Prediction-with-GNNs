//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548983388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, long p_4, char p_9, float p_11,
                 int p_13)
{
  unsigned long v_15;
  int v_7;
  long v;
  unsigned int result;
  v_15 = (unsigned long)p_4;
  v = (long)v_15;
  v_7 = (int)((unsigned long long)(! p_9) + - ((unsigned long long)((int)p_11 | p_13) + (
                                               p + (unsigned long long)p_13)));
  result = (unsigned int)(~ (((p * (unsigned long long)p_4) / (unsigned long long)(
                              p_4 / (v + 123L) + 282L)) * (unsigned long long)v_7));
  return result;
}


