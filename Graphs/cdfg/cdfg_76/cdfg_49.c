#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 655812728
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[5][4][5], unsigned char p_15)
{
  unsigned long long v_13;
  unsigned short v_10;
  double v_8;
  char v_6;
  short v_4;
  signed char v;
  unsigned long result;
  v_13 = 238905866ULL;
  v_8 = 6966768306.38;
  v_6 = (char)-92;
  v_4 = (short)-8723;
  v = (signed char)67;
  result = 17233UL;
  v_10 = (unsigned short)(! (594 | ((int)p_15 | 78297244)));
  while ((int)v != (1284 << (3606658203UL % (unsigned long)((int)v_4 + 379) & 31UL)) - (int)v_6) {
    v_4 = (unsigned long long)v_10 % 18446744073709537546ULL;
    v_6 = (char)(0U % (unsigned int)((-21 / ((int)p_15 + 425) + (int)(- v_8)) + 772));
    v_10 = (unsigned short)(((unsigned long long)p[4][0][0] - v_13) % (unsigned long long)(
                            (int)v + 1020) + (unsigned long long)v_4);
    v_4 = v_4;
  }
  while_0_break: ;
  return result;
}


