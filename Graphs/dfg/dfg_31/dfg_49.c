#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 609536753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, long p_4, short p_7[5][2], int p_13, int p_15)
{
  unsigned long long v_11;
  unsigned long v_9;
  unsigned short v;
  short result;
  result = (short)7827;
  v_11 = (unsigned long long)(~ p_15);
  v_9 = (unsigned long)(- (v_11 / ((unsigned long long)3.39747157483e+38 + 231ULL) - (
                           v_11 - (unsigned long long)p_13)) + 38768ULL);
  v = (unsigned short)65474;
  result = (short)(((p * 18446744073709490748ULL + p * (unsigned long long)p_4) - (unsigned long long)(! (
                    (int)result - (int)v))) + (unsigned long long)((unsigned long)p_7[0][1] - (
                                                                   (unsigned long)v / (
                                                                   v_9 + 852UL) ^ (unsigned long)v)));
  return result;
}


