#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820050819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, double p_9, unsigned int p_11,
           unsigned char p_13, char p_17)
{
  short v_19;
  unsigned short v_15;
  unsigned short v_7;
  short v_5;
  char v;
  double result;
  v_19 = (short)p;
  v_15 = (unsigned short)p_13;
  v = (char)p_11;
  v_7 = (unsigned short)((int)v_19 - (int)v);
  v_5 = (short)p_17;
  v = (char)(2 - (int)((unsigned char)((double)(p_11 % (unsigned int)(
                                                (int)p_13 + 889) << (
                                                ((int)v_15 | (int)v) & 31)) + p_9)));
  result = (double)((((unsigned long long)(-30342 * (int)v) + (p + (unsigned long long)v_5)) + p) / (unsigned long long)(
                    ((long long)((double)v_7 * ((double)p / (p_9 + 102.))) + -35523LL) + 947LL));
  return result;
}


