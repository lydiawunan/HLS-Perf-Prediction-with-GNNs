#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 430242609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, long p_4, long p_6, unsigned char p_8[3],
          signed char p_10[3][1][2])
{
  short v_13;
  long v;
  short result;
  v_13 = (short)((unsigned long long)((-1174L & p_4) / (-7090496L / (
                                                        p + 631L) + 846L)) % (
                 ! ((unsigned long long)p_8[2] / 101037957ULL) + 925ULL) ^ 19050ULL);
  v = - (((-3L & p_4) - (long)p_8[1] * p_4) & (long)v_13);
  result = (short)(- (-612184342LL));
  result = (short)(((~ p >> (p % (p_4 + 267L) & 31L)) - ! (p_6 / (long)(
                                                           (int)result + 149))) / (
                   p / ((long)((int)p_8[1] + (int)p_10[1][0][0]) / (- v + 361L) + 725L) + 531L));
  return result;
}


