#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872144400
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned char p_7, signed char p_9[3][2][2])
{
  unsigned long v_15;
  unsigned short v_13;
  unsigned int v_11;
  long v_4;
  unsigned long v;
  short result;
  v_15 = 10597UL;
  v_13 = (unsigned short)p;
  v_11 = (unsigned int)p_7;
  v_4 = (long)v_15;
  v_4 = (long)(((unsigned long)(~ v_4 + (long)p) + (unsigned long)v_11 % (
                                                   ((unsigned long)v_13 - v_15) + 658UL)) * 4902UL);
  v = (unsigned long)(! ((651336584ULL ^ (unsigned long long)(~ p_9[1][1][0])) / (unsigned long long)(
                         v_4 + 980L)));
  result = (short)(! ((int)((double)(v / (unsigned long)(v_4 + 216L)) - - p) - 
                      (int)(~ p_7) * (int)((unsigned char)-2.03470395019e+38f)));
  return result;
}


