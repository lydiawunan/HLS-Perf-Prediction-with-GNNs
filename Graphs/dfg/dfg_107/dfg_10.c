#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 721863761
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p)
{
  short v_13;
  int v_11;
  unsigned long v_9;
  long long v_6;
  unsigned short v_4;
  unsigned char v;
  signed char result;
  v_9 = 4270569431UL;
  v_6 = 498133635LL;
  v_4 = (unsigned short)p;
  v = (unsigned char)p;
  v_13 = (short)(! ((int)((unsigned short)(75.f * (4294937344.f * p))) % (
                    (int)v_4 + 816)));
  result = (signed char)(~ ((long long)(0 / ((int)((unsigned char)(- p)) + 7)) / (
                            ! (v_6 / ((long long)p + 1002LL)) + 930LL)));
  v_11 = -15;
  result = (signed char)((((long long)(61 >> ((int)v & 7)) + 284718837LL * (long long)v_4) - (
                          (v_6 ^ (long long)v) - (long long)((int)v / (
                                                             (int)result + 798)))) + (long long)(
                         (unsigned long)(((double)p - 305.683838699) * (double)(
                                         (float)v / (p + 848.f))) % (
                         ((v_9 - 3816861991UL) + (unsigned long)(v_11 - (int)v_13)) + 330UL)));
  return result;
}


