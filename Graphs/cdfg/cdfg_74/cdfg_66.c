#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 798689315
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, short p_9, unsigned long p_15)
{
  unsigned char v_13;
  long v_11;
  int v_6;
  signed char v_4;
  signed char v;
  unsigned int result;
  v_11 = -250926224L;
  v_4 = (signed char)65;
  v = (signed char)60;
  result = (unsigned int)p_15;
  v_6 = (int)(! (~ p_15));
  while (result >= (unsigned int)(! v)) {
    v_13 = (int)v_4 + -122;
    v = (signed char)((unsigned long)(- ((long)p_9 - v_11)) / (4294931777UL / (unsigned long)(
                                                               ((int)v_13 + (int)p_9) + 503) + 1011UL));
    v_4 = (signed char)(4294946682ULL % ((615351464ULL + (unsigned long long)p_9) + 199ULL) & (unsigned long long)(! (
                        v_6 >> 16U)));
    result = (unsigned int)((long long)(! ((unsigned int)p + 21248863U)) * (
                            (long long)p + (-20415LL >> ((int)v & 63))));
  }
  while_0_break: ;
  return result;
}


