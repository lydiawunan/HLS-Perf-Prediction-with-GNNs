#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 159301778
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p[3], signed char p_7, long long p_11)
{
  int v_17;
  unsigned long long v_15;
  double v_13;
  signed char v_9;
  char v_5;
  double v;
  unsigned char result;
  v_17 = (int)p[1];
  v_15 = (unsigned long long)p_7;
  v_13 = (double)p_7;
  v_9 = (signed char)p[2];
  v = (double)((unsigned long)((449204024L - (long)(v_13 / ((double)v_15 + 356.))) + (long)(
                               v_17 * -51)) % (((unsigned long)v_17 - 808997661UL) + 166UL));
  v_5 = (char)((long long)((int)p_7 << ((int)v_9 & 7)) % (p_11 + 628LL));
  result = (unsigned char)(! ((int)((v + v) + (double)(p[0] / 47874UL)) * (
                              (int)v_5 * (int)((char)v))));
  result = result;
  return result;
}


