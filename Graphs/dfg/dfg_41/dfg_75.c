#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 477221344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, long long p_7[1][2][3], unsigned int p_15)
{
  long long v_13;
  long long v_11;
  long v_9;
  unsigned char v_4;
  long v;
  char result;
  v_13 = 308820813LL;
  v_11 = (long long)p_15;
  v = (long)p;
  v_9 = (long)(v_13 ^ (long long)(p_15 - - (! p_15)));
  result = (char)v_11;
  v_4 = (unsigned char)((long long)(~ p) * (((long long)(v + 260579326L) + p_7[0][0][1]) - (long long)(
                                            656602879UL / (unsigned long)(
                                            (v_9 - (long)result) + 1012L))));
  result = (char)(-10L - (~ v - (long)((int)result / ((int)v_4 + 570))) / (long)(
                         0 / ((int)(- p) + 869) + 838));
  return result;
}


