#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402107209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p[2][4][4])
{
  char v_11;
  float v_9;
  long long v_7;
  int v_5;
  long v;
  short result;
  v_11 = (char)-93;
  v_7 = (long long)p[0][2][0];
  v_5 = -384992899;
  v = (long)p[1][2][0];
  result = (short)p[1][1][1];
  v_9 = (float)p[0][0][0];
  while (((96UL - p[0][0][2]) / (unsigned long)(v + 1020L)) / 44933UL > (unsigned long)v_5) {
    v = v_9 * (float)(v_7 * 18624LL);
    v_9 = (float)((unsigned long)v % (unsigned long)((unsigned int)((int)v_11 & -5) * 4294967228U + 348U));
    v_7 = (long long)(~ (~ v_5));
    v_5 = -7807;
  }
  while_0_break: ;
  return result;
}


