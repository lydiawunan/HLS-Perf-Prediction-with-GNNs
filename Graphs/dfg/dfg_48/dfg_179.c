#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 899128708
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, short p_11)
{
  int v_13;
  signed char v_9;
  unsigned long v_6;
  unsigned long long v_4;
  unsigned long long v;
  unsigned char result;
  v_13 = -4477;
  v_6 = 58528UL;
  v_4 = (unsigned long long)(- ((int)p_11 * v_13));
  v_9 = (signed char)p_11;
  v = ! (! ((unsigned long long)v_9 / 18446744073709527388ULL)) + (unsigned long long)p;
  result = (unsigned char)(- ((v - 18446744073709551560ULL) % (v_4 % (unsigned long long)(
                                                               v_6 + 639UL) + 472ULL) + (unsigned long long)(
                              (unsigned long)((int)p - -1043263237) + 341369900UL)));
  return result;
}


