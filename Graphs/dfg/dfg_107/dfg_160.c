#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 649034513
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, signed char p_5[5], double p_11, short p_13,
                  long long p_17)
{
  long v_15;
  unsigned long long v_9;
  int v_7;
  unsigned long v;
  unsigned char result;
  v_15 = 381442425L;
  v = 59176UL;
  v_7 = (int)((long long)((int)((signed char)(- p_11 - (double)((long)p_13 % (
                                                                v_15 + 231L)))) + (int)(- (~ p_5[3]))) / (
              - ((p_17 + 3722875777LL) - (long long)((int)p_5[0] % 4965003)) + 760LL));
  v_9 = (unsigned long long)(! (99 & p));
  result = (unsigned char)((unsigned long long)(p % ((int)p_5[2] + 3)) % (
                           v_9 + 902ULL));
  result = (unsigned char)((unsigned long)(~ p + (int)result) * (v - (unsigned long)(
                                                                 (unsigned int)p_5[4] / (
                                                                 ((unsigned int)v_7 - 4294950224U) + 613U))));
  return result;
}


