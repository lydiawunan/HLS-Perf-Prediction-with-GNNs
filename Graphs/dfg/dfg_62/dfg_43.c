#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160424374
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, int p_5, char p_9, unsigned long p_11[5][1],
           double p_15)
{
  signed char v_13;
  signed char v_7;
  unsigned long v;
  double result;
  v_13 = p;
  result = (double)p_9;
  v_7 = (signed char)((((unsigned long)result / (p_11[1][0] + 723UL)) % (unsigned long)(
                       (int)(! v_13) + 268) - (unsigned long)p_15) + (unsigned long)(
                      ~ (p_5 % ((int)p_9 + 886)) + (int)2.8890134432e+38f));
  result = (double)(! (((int)((signed char)result) - (int)v_7) - 22) % (
                    (int)p_9 + 101));
  v = (unsigned long)p_5;
  result = ((double)((int)p % 25) * - result) * (double)(((unsigned long long)v + 18446744072941322238ULL) - 18446744073471911753ULL) - (double)p;
  return result;
}


