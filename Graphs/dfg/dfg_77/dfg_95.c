#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 665863983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, long long p_9[4], float p_11[3][5])
{
  unsigned int v_6;
  signed char v_4;
  int v;
  char result;
  result = (char)81;
  v_6 = (unsigned int)((long long)p % (~ (((long long)result + p_9[3]) - (long long)(
                                          (int)((unsigned short)p_11[1][2]) + 36569)) + 9LL));
  v_4 = (signed char)(! (- (! ((unsigned long)v_6 * p))));
  v = -29 | - (! ((int)v_4 | 22730));
  result = (char)v;
  return result;
}


