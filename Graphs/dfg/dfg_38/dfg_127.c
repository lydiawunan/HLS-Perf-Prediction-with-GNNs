#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 146562556
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p[3][5], float p_4, unsigned int p_7[5],
         long long p_11[4][4], double p_13)
{
  unsigned long long v_15;
  unsigned short v_9;
  long v;
  char result;
  v_15 = 4952ULL;
  result = (char)-61;
  v_9 = (unsigned short)10641;
  result = (char)(! ((unsigned long long)(((long long)v_9 % (p_11[1][1] + 513LL)) % (
                                          (long long)(p_13 - (double)p_11[1][0]) + 1022LL)) + - (
                     v_15 - (unsigned long long)result)));
  v = (long)(! result);
  result = (char)(0UL - - ((unsigned long)v ^ (unsigned long)(! p_7[4])));
  return result;
}


