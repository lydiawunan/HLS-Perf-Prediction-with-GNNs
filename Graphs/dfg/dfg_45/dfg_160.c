#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 276659869
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned int p_5, double p_7, unsigned long p_9,
         unsigned char p_11[2][5])
{
  int v_15;
  unsigned int v_13;
  signed char v;
  long result;
  v_15 = (int)p;
  v_13 = - (p * ~ p) % (unsigned int)(v_15 + 809);
  result = (long)((- (p_7 / ((double)p_9 + 786.)) + (double)(((unsigned long)p_11[1][1] - p_9) * (unsigned long)v_13)) * (double)(
                  (long long)((unsigned long)((int)((char)7226102784.f) << 6) - 4294916398UL) ^ (
                  (8547LL ^ (long long)v_13) + (long long)(p_9 + 28332UL))));
  v = (signed char)result;
  result = (long)((18446744073709480546ULL % (unsigned long long)(p + 341U) | (unsigned long long)p) & (unsigned long long)(! (
                  (unsigned int)((int)v - 3033) * (p_5 * 63U))));
  return result;
}


