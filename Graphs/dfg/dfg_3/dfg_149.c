//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 269431790
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[1][1], signed char p_7, long long p_13)
{
  short v_15;
  unsigned int v_11;
  float v_9;
  unsigned short v_4;
  unsigned long long v;
  unsigned int result;
  v_15 = (short)24427;
  v_11 = (unsigned int)p_7;
  v_9 = (float)(- ((int)((double)((unsigned int)2.54278824914e+38f % (
                                  v_11 + 593U)) + (double)p_13 / 1841879293.89) - (
                   52 * (int)p_7 >> ((int)v_15 & 31))));
  v = (unsigned long long)(~ ((unsigned int)((int)p_7 % 2510940) * ! (
                              9646U / ((unsigned int)v_9 + 666U))));
  v_4 = (unsigned short)35440;
  result = (unsigned int)(~ ((18446744073483616789ULL * (v / (unsigned long long)(
                                                         (int)v_4 + 123))) / (unsigned long long)(
                             (int)p[0][0] + 220)));
  return result;
}


