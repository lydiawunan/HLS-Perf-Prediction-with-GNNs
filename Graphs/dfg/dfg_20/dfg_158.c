#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 325681516
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, int p_5, long long p_11, short p_17, int p_19)
{
  unsigned int v_15;
  unsigned int v_13;
  signed char v_9;
  double v_7;
  short v;
  char result;
  v_15 = 249568439U;
  v_13 = 3271803783U;
  v_9 = (signed char)p_11;
  result = (char)(((unsigned long)(- (v_13 + 20461U)) - (unsigned long)(
                                                        v_15 + (unsigned int)p_17) % 30246UL) - (unsigned long)(
                  (unsigned int)(! (! p_19)) + 863U * ((unsigned int)v_9 % (
                                                       v_13 + 94U))));
  v_7 = (double)(~ ((int)(~ result) / 303093885 - 1324121856));
  v = (short)(((long long)v_9 % (! (! p_11) + 103LL)) % (long long)((int)p + 454));
  result = (char)((121 | (int)(~ v)) - (((int)p + (int)p) / 20819 + (
                                                                    -42 * p_5) / (
                                                                    (int)v_7 + 350)));
  return result;
}


