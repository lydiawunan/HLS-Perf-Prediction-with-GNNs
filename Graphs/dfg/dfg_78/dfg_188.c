#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 975911422
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[1], char p_7)
{
  unsigned int v_5;
  unsigned char v;
  int result;
  v_5 = (unsigned int)p_7;
  result = (int)p[0];
  v = (unsigned char)(((long long)v_5 / ((long long)result % -500043764LL + 142LL)) * (long long)(! (~ result)) >> (
                      ! (~ (79 / ((int)p_7 + 85))) & 63));
  result = 56713;
  result = (int)(4294915261UL | (4294915576UL - (unsigned long)((unsigned int)(! result) * ~ v_5)));
  result = (int)((((unsigned int)(~ p[0]) + 4294923157U) ^ (unsigned int)(
                  (int)v + 201 / (result + 259))) % (- ((unsigned int)(
                                                        result ^ 46) / (
                                                        ((unsigned int)p[0] + v_5) + 715U)) + 207U));
  return result;
}


