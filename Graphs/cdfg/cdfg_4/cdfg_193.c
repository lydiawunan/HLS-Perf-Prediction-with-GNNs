#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 453015324
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p[4][1][1], float p_9, long long p_11,
              unsigned long p_15)
{
  long v_13;
  unsigned long v_7;
  char v_5;
  unsigned short v;
  long long result;
  v_13 = (long)p[3][0][0];
  v_7 = 170914913UL;
  if (! (((long long)p_9 % (p_11 + 352LL)) / (long long)(~ v_13 + 489L)) >= (long long)p_15) {
    result = p[0][0][0];
    v = (unsigned short)(! 3539884125UL);
  }
  else {
    v_5 = (char)(! v_7 - 4294941556UL);
    v = (unsigned short)0;
    result = (long long)(0 - (unsigned long)((int)v_5 % (-91 * (int)v_5 + 480)));
  }
  result = p[1][0][0] / (! ((long long)v / (result + 136LL)) + 21LL);
  return result;
}


