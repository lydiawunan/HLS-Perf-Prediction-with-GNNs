#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 210032083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned long p_4, char p_11, signed char p_15)
{
  unsigned long v_17;
  int v_13;
  short v_9;
  unsigned long long v_7;
  unsigned char v;
  int result;
  v_17 = 3725078623UL;
  v_13 = -394045941;
  result = (int)p_4;
  v_9 = (short)((unsigned long)((result * ((int)p_11 + v_13)) / (~ (134 / (
                                                                    (int)p_11 + 31)) + 421)) + - (! (
                (unsigned long)p_15 & v_17)));
  v_7 = (unsigned long long)v_9;
  v = (unsigned char)(~ (! v_7));
  result = (int)((unsigned long long)p - (9751ULL / (unsigned long long)(
                                          p_4 / 63157UL + 485UL) - (unsigned long long)(
                                          -9995369095.53 * (double)((int)v % 2696))));
  return result;
}


