#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 693181064
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, char p_9, int p_11, short p_13)
{
  unsigned long long v_19;
  unsigned char v_17;
  signed char v_15;
  long long v_7;
  signed char v_4;
  short v;
  long result;
  v_19 = 46016ULL;
  v_15 = (signed char)-75;
  v_4 = (signed char)p;
  result = 58939L;
  v_17 = (unsigned char)(~ (! v_19) * (unsigned long long)v_4);
  v_7 = -19LL;
  v = (short)(! ((long long)((int)((unsigned short)p) - 45608) - v_7 % (long long)(
                                                                 (int)p_9 + 487)) - (long long)(
              ((long)(p_11 - (int)p_13) + - result) * (long)(- ((int)v_15 * (int)v_17))));
  result = (long)((((int)(- v) | ((int)v_4 & -616096588)) - (int)-1.44130713127e+38) - -9);
  return result;
}


