#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 221957061
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned int p_9, unsigned long p_11, unsigned char p_13,
        double p_15)
{
  signed char v_17;
  unsigned char v_6;
  long long v_4;
  unsigned short v;
  int result;
  v_17 = (signed char)56;
  v_6 = (unsigned char)p_11;
  v = (unsigned short)p_15;
  result = -27603;
  v_4 = (long long)(((~ p_11 ^ 23058UL) % (((unsigned long)v_6 ^ 162UL % (
                                                                 p_11 + 239UL)) + 724UL)) * (unsigned long)(~ result));
  v_6 = (unsigned char)v_17;
  v_4 = (long long)((unsigned long)p_9 * p_11 | (unsigned long)((int)((unsigned char)(
                                                                (double)p_13 / (
                                                                p_15 + 61.) - (double)v_4)) & (int)p_13));
  result = (int)((double)((long long)v * v_4) + (double)((long long)v_6 % (
                                                         (v_4 ^ (long long)p) + 353LL)) / 40428343.9673);
  return result;
}


