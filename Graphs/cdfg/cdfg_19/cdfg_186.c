#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403378515
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned int p_4, long long p_11, long long p_15[2][3][1])
{
  long v_13;
  char v_9;
  long v_7;
  short v;
  int result;
  v_13 = -846150495L;
  v_7 = -631296226L;
  v = (short)p_4;
  result = (int)p_4;
  v_9 = (char)((long long)(- (3351261018UL >> 1)) + - (~ p_11));
  while (~ (- ((long)result % 109636581L)) > 8843L) {
    v_7 = (long)v_9 % ((v_7 >> ((int)v % ((int)((short)1.72133849074e+38f) + 968) & 31)) + 771L);
    v = (short)((long long)v_13 - - (! p_15[0][1][0]));
    v_9 = (char)(((unsigned int)(-104.369567871f - (float)p_11) + 624249736U) % 488U);
    result = (int)(- 2.48027240734e+38);
  }
  while_0_break: ;
  return result;
}


