#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83419344
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, short p_13)
{
  short v_11;
  unsigned short v_9;
  signed char v_7;
  unsigned long v_5;
  unsigned int v;
  unsigned long result;
  v_11 = (short)-26396;
  v_5 = 3993293343UL;
  v = 4294930972U;
  result = (unsigned long)p_13;
  v_7 = (signed char)(result % ((unsigned long)(p / 38978.) + 310UL) - (unsigned long)(! (- p_13)));
  while ((unsigned long)p > ~ (((unsigned long)v - v_5) * (unsigned long)(
                               v * 4294967270U))) {
    v_9 = (unsigned long)v_7 | 4294907801UL;
    result = (unsigned long)((long long)(p - p) * (-181766972LL % ((long long)p + 659LL)) - (long long)(! (- v_5)));
    v_7 = (signed char)((int)((short)(-2114952320.f * (float)(-48 / (
                                                              (int)v_9 + 828)))) >> (
                        (int)v_11 & 15));
    v = (unsigned int)p;
  }
  while_0_break: ;
  return result;
}


