#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 481973327
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned long long p_5, int p_7,
                       signed char p_11, unsigned int p_13)
{
  long long v_17;
  char v_15;
  unsigned long long v_9;
  unsigned char v;
  unsigned long long result;
  v_17 = (long long)p_5;
  v_9 = (unsigned long long)p;
  result = 212354018ULL;
  v_15 = (char)p_5;
  v = (unsigned char)((long long)(((int)v_15 % ((int)p + 359) & 2588158) * - (! p_7)) / (
                      ! v_17 + 738LL));
  result = ! (~ result + (unsigned long long)((int)v * (int)p)) * ((p_5 % (unsigned long long)(
                                                                    p_7 + 895)) / (
                                                                   result * v_9 + 146ULL) | (unsigned long long)(
                                                                   (unsigned int)p_11 / (
                                                                   (p_13 - (unsigned int)p) + 836U)));
  result = (unsigned long long)((int)((unsigned char)((double)result + 721.306965253)) - 151);
  return result;
}


