#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180620276
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, long p_4[3][3][3], long long p_7, signed char p_9,
        signed char p_11)
{
  char v_13;
  unsigned short v;
  int result;
  v_13 = (char)-27;
  if (4294967295UL < (unsigned long)(((long)p_11 ^ -1001973787L) % 391621379L - ! (
                                     p_4[2][1][1] / (long)((int)v_13 + 150)))) {
    v = (unsigned short)15703;
    result = (int)v;
  }
  else result = (int)(- p_7 * (long long)p_9);
  result = (int)(- (-1394201060.53 * (double)result) - (double)(- (p / (
                                                                   p_4[2][2][2] + 738L))));
  return result;
}


