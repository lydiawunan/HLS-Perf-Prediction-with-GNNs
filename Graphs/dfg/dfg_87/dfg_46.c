#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 975729684
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p[1], short p_4, unsigned char p_6[5][4][1], short p_8,
         unsigned long long p_10)
{
  unsigned char v_13;
  long long v;
  char result;
  result = (char)p_4;
  v_13 = (unsigned char)(~ result);
  v = (long long)(! p_10 % (unsigned long long)((int)p_6[4][3][0] + 678));
  result = (char)((unsigned long long)p_4 - (((unsigned long long)p_6[3][2][0] + (
                                              (unsigned long long)p_8 - p_10)) ^ (unsigned long long)(
                                             ~ v - (long long)v_13)));
  result = (char)((float)(25799LL + (29741LL * (long long)result - 11383LL)) - - p[0]);
  return result;
}


