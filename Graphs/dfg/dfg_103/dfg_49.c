#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 802485855
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned int p_9[1], short p_11,
         unsigned short p_13, signed char p_15[2])
{
  double v_7;
  long long v_4;
  unsigned long long v;
  char result;
  v_7 = (double)(~ (unsigned short)12937);
  v = 18446744073709551510ULL;
  v_4 = (long long)((int)(v_7 - (double)(966349335UL / (unsigned long)(
                                         p_9[0] * (unsigned int)p_11 + 596U))) ^ (
                    ! ((int)p_13 % -841478265) + (int)p_15[0]));
  result = (char)((unsigned long long)-3688056064.f % (((v % 3564ULL) / (unsigned long long)(
                                                        ~ v_4 + 133LL)) * (unsigned long long)(
                                                       0 - (int)(! p)) + 256ULL));
  return result;
}


