#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 42783219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p[2][4], long p_4, unsigned long long p_13,
                       signed char p_15, int p_17[5][3][5])
{
  signed char v_11;
  long v_9;
  unsigned long v_7;
  unsigned char v;
  unsigned long long result;
  v_11 = (signed char)p_4;
  v_9 = p_4;
  v_7 = (unsigned long)p_4;
  result = p_13;
  v = (unsigned char)(- (-50808L >> (v_9 & 31L)) + p_4);
  while (30892238867ULL / ((unsigned long long)p[0][0] % (result % (unsigned long long)(
                                                          p_4 + 903L) + 191ULL) + 449ULL) <= (unsigned long long)(
         (long long)(! (4294930551UL - (unsigned long)v)) - 939000026LL)) {
    result = (long long)v_11 % ((long long)v_9 % 541896946LL + 506LL);
    v_11 = (signed char)((v_7 | (unsigned long)-2891986688.f) * (unsigned long)(! (
                         (int)p_15 % 214)));
    v_7 = (unsigned long)((p_13 + (unsigned long long)((long long)p_15 * p[1][3])) - (unsigned long long)p_17[2][2][3]);
    v = (unsigned char)v_7;
  }
  while_0_break: ;
  return result;
}


