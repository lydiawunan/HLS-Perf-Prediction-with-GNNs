#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62454014
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, long long p_5[1][4], unsigned char p_7,
                 char p_15)
{
  int v_13;
  char v_11;
  signed char v_9;
  long long v;
  unsigned int result;
  v_13 = (int)p_15;
  v_11 = (char)121;
  v_9 = (signed char)83;
  if ((long)((int)(~ v_11)) / ((long)v_13 % 2010L + 56L) != (long)(! p_15)) {
    result = (unsigned int)(~ ((int)p_7 % ((int)v_9 + 406)));
    v = (p_5[0][1] % 17LL) * 64LL;
    result = (unsigned int)((long long)result % ((long long)p / ((v + p_5[0][1]) + 26LL) + 535LL));
  }
  else result = (unsigned int)p_5[0][2];
  return result;
}


