#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 547455735
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[4][4], int p_4, signed char p_6[4][1],
                   signed char p_8, unsigned short p_10[3])
{
  char v_13;
  char v;
  unsigned short result;
  v_13 = (char)-45;
  v = (char)((long long)(-592941531 * ((int)p[1][0] * (int)p_8)) % 961779705LL);
  if ((unsigned long long)((int)v + (int)p_10[2] * ((int)2.00888484841e+38f - p_4)) <= - (
      ((unsigned long long)v_13 * 18446744073210645233ULL) * (unsigned long long)(
      p_4 - (int)p_8))) {
    result = (unsigned short)(! (((long long)p_4 + 7146LL) + (long long)(
                                 -147273629 * (int)p_6[3][0])));
    result = (unsigned short)(~ (! ((int)p[0][1] * (int)result)));
  }
  else {
    result = (unsigned short)(-696127733LL % (long long)(! ((int)p_8 / 10) + 764));
    result = ~ (! result);
  }
  return result;
}


