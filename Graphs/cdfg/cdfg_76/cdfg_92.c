#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 989557480
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, int p_9[1][2], short p_11)
{
  short v_7;
  unsigned short v_4;
  int v;
  unsigned long long result;
  v_7 = (short)p;
  v_4 = (unsigned short)24248;
  result = 26101ULL;
  v = (int)(- ((unsigned long long)(432541940L * (long)v_4) % ((unsigned long long)v_7 % (
                                                               p + 742ULL) + 755ULL)));
  while (~ (! result) <= 18446744073708710675ULL) {
    v_7 = (int)v_4 % ((int)((unsigned short)((double)v * 1.54939280089e+38)) + 503);
    v = (int)p_11;
    v_4 = (unsigned short)((p / (unsigned long long)((int)v_7 + 586) - (
                            p - 75ULL)) & (unsigned long long)p_9[0][1]);
    result = (unsigned long long)(- (~ (signed char)33));
  }
  while_0_break: ;
  return result;
}


