#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 491568449
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned short p_4[4][1][1], short p_7, unsigned short p_13,
         int p_17[1][4])
{
  char v_15;
  unsigned char v_11;
  unsigned long v_9;
  long v;
  char result;
  v_15 = (char)5;
  v_11 = (unsigned char)(- (! 18446744073219504310ULL));
  v_9 = (unsigned long)(((unsigned long long)(29737 / ((int)v_11 + 991)) / (
                         ((unsigned long long)p_13 & 72523769ULL) + 96ULL) | (unsigned long long)(
                         - p / (long)(((int)p_7 + (int)v_15) + 760))) - (unsigned long long)(- p_17[0][2]));
  v = (long)((unsigned long)p_7 + - (! (v_9 % (unsigned long)((int)p_4[2][0][0] + 779))));
  result = (char)((! p % (long)((int)p_4[0][0][0] + 623) - ~ (! v)) * 130L);
  return result;
}


