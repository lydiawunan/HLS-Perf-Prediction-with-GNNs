#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335013692
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p[3][4][4], short p_4[1][3][3], char p_6,
                unsigned short p_8)
{
  signed char result;
  result = (signed char)(- (~ 18446744073709516716ULL));
  result = (signed char)(((18446744073665299050ULL - (unsigned long long)(- result)) & (unsigned long long)(! (
                          (int)result - (int)p[0][1][0]))) / (unsigned long long)(
                         (long long)((unsigned long)p_4[0][1][1] + 3336047687UL) * (
                         0 % (long long)((int)p_6 / ((int)p_8 + 354) + 775)) + 560LL));
  return result;
}


