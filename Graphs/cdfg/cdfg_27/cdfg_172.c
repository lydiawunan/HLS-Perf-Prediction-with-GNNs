#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801642743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned long long p_4[5][2],
                   unsigned long long p_9)
{
  unsigned char v_15;
  long v_13;
  unsigned long v_11;
  unsigned long long v_7;
  signed char v;
  unsigned short result;
  v_15 = (unsigned char)p_9;
  v_13 = (long)p_4[3][0];
  v_11 = 3228148319UL;
  v_7 = 23522ULL;
  v = (signed char)p_4[4][1];
  result = (unsigned short)p_4[4][0];
  while (((p_4[3][0] - (unsigned long long)v) % ((unsigned long long)-1343809642.81 + 456ULL)) * (
         - v_7 * (p_9 - 98ULL)) == (unsigned long long)v_11) {
    v_15 = (unsigned long long)v_15 - ((unsigned long long)v_13 ^ 18446744073257754769ULL);
    v = (signed char)(-577301248.f * (float)v);
    result = (unsigned short)-1.12369787075e-06f;
    v_11 = 107UL;
  }
  while_0_break: ;
  result = (unsigned short)((long)result / (-37L / (p + 360L) + 272L) + (long)(~ (
                            23 % ((int)result + 90))));
  return result;
}


