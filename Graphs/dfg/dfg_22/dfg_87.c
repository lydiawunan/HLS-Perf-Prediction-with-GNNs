#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1024317375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p[4][4][3], long p_7, short p_9, int p_11,
                  float p_17)
{
  short v_19;
  long v_15;
  unsigned short v_13;
  char v_5;
  char v;
  unsigned char result;
  v_19 = (short)p_11;
  v_15 = (long)p_11;
  v_13 = (unsigned short)(((-20904L / (13496L / (v_15 + 875L) + 960L)) % (
                           (long)p_17 + 303L)) / (long)(~ ((int)(~ v_19) - (
                                                           15719 ^ p_11)) + 2));
  v_5 = (char)((int)(- p_9) % ((p_11 >> 25LL) + 788) - (int)(~ v_13));
  v = (char)(! ((unsigned long)(50947L - p_7) % 881516260UL) % (unsigned long)(
             ~ (! ((int)p[1][1][2] >> 5)) + 995));
  result = (unsigned char)(((int)v / ((int)p[0][0][2] + 186)) * (int)v_5);
  return result;
}


