#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 634556164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, short p_5[3], double p_9, char p_11)
{
  double v_7;
  unsigned long v;
  unsigned short result;
  v_7 = (double)((unsigned int)p_11 + 454669089U);
  v = (unsigned long)((double)p * - p_9);
  result = (unsigned short)(((unsigned long long)p % 778750927ULL) / (unsigned long long)(
                            ~ v + 202UL) - (unsigned long long)((int)(! p_5[0]) + (
                                                                28844 >> (
                                                                (int)((unsigned short)(
                                                                v_7 + -9.27772095796e+37)) & 15))));
  return result;
}


