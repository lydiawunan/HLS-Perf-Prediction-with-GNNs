#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103103110
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, long long p_5, unsigned short p_11, char p_15)
{
  unsigned char v_13;
  long long v_9;
  unsigned long v_7;
  long long v;
  unsigned short result;
  v_13 = (unsigned char)p_11;
  v_9 = 3861LL;
  v = 418494370LL;
  result = (unsigned short)p_15;
  v_7 = (unsigned long)(p_5 / ((p_5 ^ (long long)(p % ((int)p_15 + 519))) + 218LL));
  while (v >= ((long long)p % (p_5 + 956LL) >> ((long long)v_7 % (v_9 + 24LL) & 63LL)) / 170LL) {
    v_13 = (unsigned int)v_13 + 4294954998U;
    v_7 = (unsigned long)((long long)((long)p_11 / 215348861L) % 441081989LL >> (
                          ! (p_5 ^ -75LL) & 63LL));
    result = (unsigned short)v;
    v_9 = p_5;
  }
  while_0_break: ;
  return result;
}


