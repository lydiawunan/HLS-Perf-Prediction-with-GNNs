#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 569121299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned long p_5, unsigned long p_9,
                  char p_11[1][2], signed char p_13)
{
  unsigned long long v_15;
  unsigned long v_7;
  short v;
  unsigned char result;
  v_15 = 56652ULL;
  v_7 = 422234710UL;
  v_7 = (unsigned long)((unsigned long long)(~ ((unsigned long)p_11[0][1] * (
                                                v_7 * (unsigned long)p_13))) ^ 
                        (unsigned long long)((unsigned long)(p - -1070835841L) / (
                                             ((unsigned long)p + v_7) + 834UL)) * v_15);
  result = (unsigned char)(! (((unsigned long)(p % 64961L) + (p_5 >> 8UL)) - (
                              (unsigned long)(~ p) - v_7 % (p_9 + 442UL))));
  v = (short)32143;
  result = (unsigned char)(~ (51357ULL * (unsigned long long)(-64 * (
                                                              (int)result / (
                                                              (int)v + 154)))));
  return result;
}


