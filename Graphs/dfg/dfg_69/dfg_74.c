#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 266795719
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, char p_7, long p_9, double p_11)
{
  long v_4;
  unsigned int v;
  char result;
  v_4 = p_9;
  result = (char)p_11;
  v = (unsigned int)v_4;
  v = (unsigned int)(((unsigned long long)p_7 + ((unsigned long long)p_9 - 18446744073709529496ULL) / (
                                                (unsigned long long)(
                                                (double)v / (p_11 + 208.)) + 289ULL)) * (unsigned long long)result);
  result = (char)-93;
  result = (char)(! ((unsigned long)(6935U / (v % (unsigned int)((int)result + 417) + 605U)) % (unsigned long)(
                     ((61580L + v_4) - (long)p) + 766L)));
  return result;
}


