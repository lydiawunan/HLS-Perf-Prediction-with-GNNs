#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156943503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, char p_13, short p_15[5][2])
{
  unsigned short v_11;
  int v_8;
  unsigned long long v_6;
  unsigned short v_4;
  signed char v;
  signed char result;
  v_11 = (unsigned short)p_15[3][1];
  v_8 = -204136112;
  v_6 = (unsigned long long)((long long)(v_8 / ((((int)p + (int)v_11) >> (
                                                 (int)p / ((int)p + 266) & 31)) + 754)) / (
                             ((long long)(! p_13) + -165744889LL / (long long)(
                                                    (int)p_15[3][0] + 59)) % 16122LL + 924LL));
  v_4 = (unsigned short)v_6;
  v = (signed char)(-45 / ((int)v_4 + 738));
  result = v;
  return result;
}


