#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 267648232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, unsigned char p_5, unsigned long long p_13,
         signed char p_15, signed char p_17[1][3][3])
{
  unsigned long long v_11;
  signed char v_9;
  long v_7;
  int v;
  long result;
  v_11 = 18446744072880881314ULL;
  v_7 = -326813570L;
  v = -25463;
  result = (long)p;
  v_9 = (signed char)((unsigned long long)(- p_17[0][2][2]) - 478440589ULL);
  while (- (- v) * ((int)p / ((int)((signed char)2.39483307143e+38) + 115)) > (int)p_5) {
    v_7 = v_11 / (unsigned long long)((long)v_9 % ((v_7 - 10367L) + 267L) + 435L);
    v_11 = (unsigned long long)(! (~ p_15));
    v = 54948;
    v = (int)(~ ((unsigned long long)(v + v) % (p_13 + 1008ULL)));
  }
  while_0_break: ;
  return result;
}


