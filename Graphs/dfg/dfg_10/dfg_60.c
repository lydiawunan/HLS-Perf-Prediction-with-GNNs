#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254581837
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[5][5][1], long p_4[4][1][1], float p_13)
{
  unsigned long long v_11;
  long long v_9;
  char v_7;
  short v;
  short result;
  v_11 = (unsigned long long)p_4[2][0][0];
  v_9 = -50002LL;
  result = (short)(- p_13);
  v_7 = (char)(v_11 % (unsigned long long)(p_4[0][0][0] + 799L));
  v = (short)12980;
  result = (short)((long long)(0 - (unsigned long)result) & (long long)(
                                                            (p[2][4][0] & p_4[3][0][0]) % (long)(
                                                            (int)(~ v) + 707)) * (
                                                            (long long)v_7 | ~ v_9));
  return result;
}


