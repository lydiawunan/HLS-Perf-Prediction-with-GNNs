//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783775469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, unsigned long p_11, short p_15[1][4])
{
  signed char v_13;
  char v_9;
  unsigned long long v_7;
  unsigned long v_5;
  unsigned int v;
  short result;
  v_13 = (signed char)73;
  v_9 = (char)p_11;
  v_7 = 28746ULL;
  v_5 = 145302345UL;
  result = (short)(p_11 >> ((int)v_9 & 31));
  v_5 = (unsigned long)((8000372400.65 - (double)((int)v_9 / ((int)v_9 + 83))) * (double)(
                        (v_5 - v_5) + 57531UL)) + ((p_11 - (unsigned long)v_13) * 18129597UL + (unsigned long)(
                                                   (int)(- p_15[0][3]) + (
                                                   (int)result - 119)));
  v = (unsigned int)(~ (- v_7));
  result = (short)(p - (((unsigned long)v + v_5) - 601275447UL) * (unsigned long)v);
  return result;
}


