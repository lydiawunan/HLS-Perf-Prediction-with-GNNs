#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59946641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, double p_4, long p_7, signed char p_11[5][5][1])
{
  unsigned int v_15;
  unsigned int v_13;
  short v_9;
  double v;
  char result;
  v_15 = 666308560U;
  v_13 = 10673U;
  v = p_4;
  result = (char)-43;
  v_9 = (short)0;
  result = (char)(! ((unsigned long)p_7 & (unsigned long)((unsigned int)(- v_9) - (
                                                          (unsigned int)p_11[2][3][0] | v_13))));
  v = (double)(! ((708614278LL - (long long)result) ^ (long long)(139 & (
                                                                  93 ^ (int)result))));
  result = (char)(! ((p ^ (unsigned int)p_4) * (unsigned int)5159738741.26) + (unsigned int)(
                  246 % (((int)result % 39568) % ((int)v + 858) + 684)));
  return result;
}


