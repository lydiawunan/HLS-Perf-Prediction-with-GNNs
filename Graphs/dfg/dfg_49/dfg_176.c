#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 613118407
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_7, char p_11,
                       long p_13, float p_15)
{
  short v_9;
  char v_5;
  unsigned long v;
  unsigned long long result;
  v_9 = (short)-14240;
  v_5 = (char)p_15;
  result = (unsigned long long)(((unsigned int)(- ((int)v_5 - 1)) | p) >> (
                                (long)((int)(! p_7) + (int)v_9) % (((
                                                                    (long)p_11 + p_13) | (long)(
                                                                    p_15 * -17.f)) + 85L) & 31L));
  v = (unsigned long)(- (18446744073709551490ULL - - result) * ~ (10248ULL / (
                                                                  result + 621ULL)));
  result += ~ ((unsigned long long)((unsigned long)-3.18492548353e+38f / (
                                    v + 611UL)) + ! result);
  result = - result * (unsigned long long)(p * 46854U);
  return result;
}


