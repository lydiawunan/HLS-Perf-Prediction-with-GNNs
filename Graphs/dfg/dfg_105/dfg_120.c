#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 867614447
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p[1][5][5], double p_7, long p_13, unsigned char p_15)
{
  long long v_19;
  double v_17;
  unsigned short v_11;
  short v_9;
  signed char v_4;
  char v;
  double result;
  v_19 = 59860LL;
  v_17 = (double)p_13;
  v_11 = (unsigned short)p_15;
  v_9 = (short)-26061;
  v = (char)((long long)((unsigned long)((int)v_11 / ((int)p[0][2][3] + 549)) % 4005326004UL + (unsigned long)(
                         p_13 + (long)(~ p_15))) / (((long long)v_17 - v_19) + 549LL));
  v_4 = (signed char)(- ((double)(- (~ p[0][2][2])) + (p_7 / ((double)p[0][3][1] + 882.) + (double)(
                                                       51972UL - (unsigned long)v_9))));
  v = (char)(((long long)v_4 - 689070610LL) % (long long)((int)(~ v) + 446));
  result = (double)v;
  return result;
}


