#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 573649563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, int p_9[3][1])
{
  int v_11;
  unsigned long long v_7;
  double v_4;
  unsigned short v;
  long result;
  v_11 = p;
  v_7 = (unsigned long long)p_9[1][0];
  v = (unsigned short)p_9[0][0];
  v_4 = (double)(~ ((- v_11 >> (91 / (p + 812) & 31)) % (p_9[2][0] + 414)));
  result = (long)((unsigned long)(! p_9[0][0]) % 4072228889UL);
  v_4 = (double)(- v_7 % (unsigned long long)((18817UL & - ((unsigned long)v_4 + 3526544155UL)) + 85UL));
  result = (long)((double)(! (~ (result ^ (long)v))) / (((double)(~ (
                                                         14586U * (unsigned int)v_4)) - (
                                                         7.37125795635e+36 - (double)p)) + 957.));
  return result;
}


