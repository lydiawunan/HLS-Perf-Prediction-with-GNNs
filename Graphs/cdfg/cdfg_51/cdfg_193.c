#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 35882093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, short p_7, unsigned long p_17[3][2])
{
  unsigned short v_15;
  short v_13;
  long long v_11;
  unsigned char v_9;
  float v_5;
  long v;
  unsigned long result;
  v_15 = (unsigned short)p_7;
  v_13 = (short)p;
  v_11 = -6239LL;
  v_9 = (unsigned char)136;
  v_5 = (float)p_7;
  result = p_17[1][1];
  v = (long)(- ((long long)(83 >> (result & 7UL)) & (p + (long long)p_17[2][1])));
  while (((long long)v / (p + 943LL)) % ((long long)v_5 + 96LL) - (long long)p_7 >= 
         ((long long)((int)v_9 / ((int)((unsigned char)-549.884745678) + 857)) / (
          ((long long)v_9 - p) + 112LL)) % (v_11 * (long long)v_13 + 1004LL)) {
    v_5 = (unsigned int)v_15 * 4294942719U;
    v_11 = (long long)(((unsigned long long)((long long)p_17[2][1] & p) & (
                        18446744073709547460ULL ^ (unsigned long long)p_17[0][1])) - (unsigned long long)(
                       (int)v_13 << ((4497 >> (v_11 & 15LL)) & 15)));
    v = 1018161248L;
    v_9 = (unsigned char)(~ 0L);
  }
  while_0_break: ;
  return result;
}


