#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 333196580
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p[3][3], unsigned long p_4, short p_6,
         unsigned long long p_8, long long p_10[1][1][1])
{
  unsigned char v_13;
  unsigned long v;
  long result;
  v_13 = (unsigned char)p[2][0];
  v = (unsigned long)(! (((long long)p[0][2] / 50016LL) / (long long)(
                         (int)(~ v_13) + 980)) & ! (p_10[0][0][0] * (
                                                    p_10[0][0][0] / (long long)(
                                                    (int)p[0][0] + 103))));
  result = (long)((~ (3995505398ULL | p_8) * (unsigned long long)((v << (
                                                                   p_8 & 31ULL)) + 3269UL)) / 24829ULL);
  result = result;
  result = (long)((unsigned long long)(((unsigned long)p[2][0] / (p_4 + 689UL)) % (unsigned long)(
                                       ((long)p_6 ^ result) + 323L) + 4199350220UL) / (
                  ~ ((79ULL + p_8) - (unsigned long long)(- p_10[0][0][0])) + 1013ULL));
  return result;
}


