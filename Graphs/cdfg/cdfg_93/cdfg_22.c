#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 836690193
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p)
{
  double v_7;
  unsigned short v_5;
  unsigned char v;
  unsigned short result;
  v_7 = (double)p;
  v_5 = (unsigned short)14233;
  v = (unsigned char)(! (((int)v_5 % ((int)((unsigned short)v_7) + 533)) / (
                         (-62 ^ (int)p) + 892)));
  result = (unsigned short)(! ((int)v / ((int)p + 763)) << ((int)v_5 & 31));
  return result;
}


