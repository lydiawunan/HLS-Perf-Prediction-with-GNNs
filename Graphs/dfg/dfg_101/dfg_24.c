#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628065546
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, int p_5, char p_7, double p_9,
                  float p_11[4][4])
{
  unsigned char v_17;
  int v_15;
  int v_13;
  signed char v;
  unsigned long result;
  v_17 = (unsigned char)p_11[0][0];
  v_15 = (int)p_11[3][1];
  v_13 = p_5;
  v = (signed char)92;
  result = (unsigned long)((unsigned long long)((-116 + v_13) % 581 & (
                                                (v_13 - (int)p_7) + (
                                                v_15 | (int)v_17))) + 18446744073709551615ULL);
  result = (unsigned long)((float)(~ ((long long)result / 324889828LL - (long long)(
                                      result - 222UL))) / ((- p_11[2][0] - (float)p_7) + 701.f));
  v = (signed char)(~ ((539UL + (result - (unsigned long)p_9)) / (unsigned long)(
                       (int)v + 122)));
  result = (unsigned long)(- (((int)v / ((int)p + 331)) * 47439) * (! (! p_5) + (int)p_7));
  return result;
}


