#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 807725494
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p[4], unsigned char p_4,
                       unsigned int p_6[2], int p_11, unsigned int p_15[4][4])
{
  long v_17;
  int v_13;
  unsigned long long v_9;
  unsigned int v;
  unsigned long long result;
  v_17 = (long)p_11;
  v_9 = (unsigned long long)p_15[0][2];
  v = p_6[1];
  result = 851543845ULL;
  v_13 = (int)v_17;
  while ((unsigned long long)(~ (p[2] * (unsigned long)p_4) - (unsigned long)(
                              ! p_6[0] * v)) < (18446744073709551536ULL * v_9) % 18446744072638009050ULL >> (
                                               (22UL + p[2]) % (unsigned long)(
                                               p_11 + 781) & 63UL)) {
    result = (long long)v_13 + -24101LL;
    v_13 = (int)(~ p_6[1]);
    v = ~ (76U % (((unsigned int)p_4 | p_15[2][2]) + 797U));
    v_9 = (result + (unsigned long long)-3551452341.53) * (unsigned long long)(- (
          (unsigned int)v_13 / (p_6[1] + 797U)));
  }
  while_0_break: ;
  return result;
}


