#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 91961607
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned int p_13)
{
  unsigned short v_17;
  double v_15;
  unsigned long long v_11;
  char v_9;
  unsigned long v_7;
  signed char v_5;
  unsigned int v;
  char result;
  v_17 = (unsigned short)58453;
  v_11 = 18446744073079733369ULL;
  v_7 = (unsigned long)p_13;
  v_5 = (signed char)119;
  v = p_13;
  result = (char)-122;
  v_9 = (char)(- ((float)(~ v_17) + -1.29599658601e+38f));
  while (-261.847147003 < (double)(~ (v % (v + 281U)) / ((153U % (v + 254U)) * (unsigned int)(
                                                         (int)p << ((int)v_5 & 7)) + 967U))) {
    v_15 = v_11 % (unsigned long long)(v_7 * 327578403UL + 907UL);
    v_5 = v_5;
    v_11 = (unsigned long long)((p_13 / (p_13 + 865U) | (unsigned int)(
                                 v_15 + -6329255748.93)) ^ (unsigned int)(! (
                                (int)v_9 % ((int)p + 781))));
    v_5 = (signed char)(((int)v_5 - ((int)p + -15163)) & (int)(- (! p)));
  }
  while_0_break: ;
  return result;
}


