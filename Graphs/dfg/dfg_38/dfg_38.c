#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 745990034
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned short p_9, float p_15[5][3],
          unsigned char p_19[3][4][1], unsigned int p_23)
{
  signed char v_21;
  char v_17;
  signed char v_13;
  unsigned int v_11;
  unsigned char v_6;
  long long v_4;
  unsigned long long v;
  short result;
  v_21 = (signed char)p_9;
  v_17 = (char)42;
  v_13 = (signed char)p_19[0][1][0];
  v_11 = 3989246186U;
  v_4 = (long long)p_9;
  v = (unsigned long long)((- p % ((long long)p_19[0][0][0] / ((long long)p_9 * p + 738LL) + 420LL)) * (
                           (0LL - (long long)v_11 / -30468LL) & (long long)(
                           622301681UL | (unsigned long)((unsigned int)v_21 % (
                                                         p_23 + 86U)))));
  v_6 = (unsigned char)(878447748ULL * ((unsigned long long)(- (v_11 + 260910267U)) - (
                                        (unsigned long long)v_13 * v & (unsigned long long)(
                                        (int)((char)p_15[0][0]) + (int)v_17))));
  v = (unsigned long long)((long long)-2.28672258246e+38 + ((long long)(~ v_6) - (
                                                            (p - 47206LL) + (long long)p_9)));
  result = (short)(~ ((18446744073709547114ULL + v) + 8194ULL) / (unsigned long long)(
                   (91 >> (! v_4 & 7LL)) * -817760393 + 472));
  return result;
}


