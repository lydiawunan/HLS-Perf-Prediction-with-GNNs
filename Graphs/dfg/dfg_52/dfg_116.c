#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 372287786
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p[5][5][5], unsigned char p_13)
{
  int v_11;
  unsigned int v_8;
  unsigned long long v_6;
  double v_4;
  unsigned long v;
  signed char result;
  v_8 = (unsigned int)p_13;
  v = 3948952619UL;
  v_11 = (int)(~ 721095821LL);
  v_6 = (unsigned long long)(- 7724875801.);
  v_4 = (double)((unsigned long long)v_8 | 18446744073709526531ULL * (unsigned long long)(
                                           (845658499U + (unsigned int)p_13) | (unsigned int)p_13));
  result = (signed char)((unsigned long long)(! v * (unsigned long)((int)((unsigned short)(
                                                                    22200. + v_4)) & 27155)) % (
                         (v_6 - (unsigned long long)(- v_8)) * ((p[1][2][0] - 917926590ULL) * (unsigned long long)(
                                                                (double)v_11 - 1221036981.04)) + 802ULL));
  return result;
}


