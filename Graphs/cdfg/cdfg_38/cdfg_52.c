#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254061785
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p)
{
  int v_15;
  unsigned short v_13;
  int v_11;
  long long v_8;
  long v_6;
  short v_4;
  unsigned long v;
  short result;
  v_15 = -5347;
  v_13 = (unsigned short)p;
  v_8 = (long long)p;
  v_6 = (long)p;
  v_4 = (short)30519;
  v = 3375100470UL;
  result = (short)-5583;
  if ((int)(! v_13) * ~ ((int)p % ((int)p + 977)) <= v_15) {
    result = (short)(- (~ (~ p)));
    v = (unsigned long)((((long long)v_4 + v_8) ^ (long long)(! result)) - (long long)(
                        (unsigned long)p - (v >> 9)));
    result = (short)v_6;
  }
  else {
    result = result;
    v_11 = (int)p;
    v = (unsigned long)v_11;
  }
  result = (short)(((v / 148197998UL) * (unsigned long)((int)result * (int)v_4)) / 38239UL);
  return result;
}


