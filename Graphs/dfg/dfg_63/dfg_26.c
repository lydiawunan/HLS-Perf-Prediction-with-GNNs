#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 437024131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long p_15[1])
{
  long v_19;
  unsigned int v_17;
  char v_12;
  int v_10;
  unsigned char v_8;
  unsigned char v_6;
  short v_4;
  unsigned long long v;
  unsigned long long result;
  v_19 = -120637727L;
  v_17 = 4203894091U;
  v_12 = (char)p_15[0];
  v_10 = -31591;
  v = (unsigned long long)p_15[0];
  v_8 = (unsigned char)(((50011038ULL - ((unsigned long long)v_17 ^ p)) - (unsigned long long)(
                         - v_19 + -102L)) / ((unsigned long long)-1.33600119997e+38 / (
                                             p + 656ULL) + 440ULL));
  v_4 = (short)(! ((unsigned long long)(v_10 + (int)v_12) + (p + (unsigned long long)p_15[0])) + p);
  v_6 = v_8;
  result = 219ULL / (v % (unsigned long long)(((int)v_4 - -402) + 767) + 868ULL) + (unsigned long long)v_6;
  return result;
}


