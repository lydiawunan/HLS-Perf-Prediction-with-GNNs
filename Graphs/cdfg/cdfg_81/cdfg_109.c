#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950788371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p)
{
  unsigned char v_9;
  unsigned long v_7;
  unsigned long long v_4;
  long long v;
  char result;
  v_9 = (unsigned char)p;
  v_7 = (unsigned long)p;
  v_4 = (unsigned long long)p;
  if ((float)(! v_9) <= 8424158208.f) {
    v = 799725880LL;
    result = (char)-115;
  }
  else {
    v = (long long)v_7;
    result = (char)p;
    result = (char)(- ((unsigned long long)result | v_4 * v_4));
  }
  result = (char)(((long long)3.22230183214e+38 - v / 31LL) * (long long)result);
  return result;
}


