#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 314250196
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, short p_11, unsigned long long p_15)
{
  unsigned int v_13;
  long long v_8;
  unsigned char v_6;
  double v_4;
  long long v;
  unsigned long result;
  v_13 = 314331198U;
  v_8 = 484650190LL;
  result = 4294931382UL;
  v_4 = (double)(((unsigned long long)((int)p * (32061 + (int)p)) + 18446744073709490360ULL) % (unsigned long long)(
                 result + 93UL));
  v_6 = (unsigned char)86;
  v = (long long)((unsigned long long)((long long)v_4 - ((long long)v_6 % (
                                                         v_8 + 568LL) - (long long)(
                                                         34096U + (unsigned int)p))) * - (
                  (unsigned long long)((unsigned int)p_11 + v_13) - 25ULL / (
                                                                    p_15 + 1008ULL)));
  result = (unsigned long)(- (~ v));
  return result;
}


