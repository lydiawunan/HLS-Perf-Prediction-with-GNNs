#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1043091005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p)
{
  unsigned short v_13;
  unsigned long v_11;
  short v_9;
  double v_7;
  unsigned char v_5;
  char v;
  unsigned int result;
  v_13 = (unsigned short)p;
  v_11 = (unsigned long)p;
  v_9 = (short)p;
  v_7 = 2566929734.02;
  v_5 = (unsigned char)101;
  v = (char)p;
  while ((long)(~ (p / ((-5 >> ((int)v_5 & 7)) + 745))) == 6513L) {
    v_7 = v_11 % (unsigned long)((int)v_9 / ((int)((short)(v_7 - 6824945075.01)) + 743) + 457);
    v_9 = (short)(! p + 161);
    result = (unsigned int)(! ((long)(- v_13) / 451186605L));
    v_5 = (unsigned char)result;
  }
  while_0_break: ;
  result = (unsigned int)v;
  return result;
}


