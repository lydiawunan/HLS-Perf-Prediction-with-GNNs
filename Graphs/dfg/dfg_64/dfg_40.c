#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 445631133
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned long long p_4, long p_7,
           int p_9[5][5][4])
{
  long long v_13;
  unsigned long v_11;
  unsigned short v;
  double result;
  v_13 = -47780LL;
  v_11 = (unsigned long)((p_7 << 23UL) % 26378L);
  v = (unsigned short)(! ((long long)((unsigned long)(p_7 * 172L) + (
                                      4294966751UL + v_11)) * ! v_13));
  v = v;
  result = (double)(((! p + (p_4 & (unsigned long long)v)) + 1ULL) + (unsigned long long)(
                    ! (p_7 * (long)v) % (long)(p_9[0][1][2] + 997)));
  return result;
}


