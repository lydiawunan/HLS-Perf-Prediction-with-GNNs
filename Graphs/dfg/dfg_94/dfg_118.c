#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731579009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, int p_15, unsigned short p_17)
{
  unsigned char v_12;
  unsigned char v_10;
  double v_8;
  unsigned long long v_6;
  unsigned short v_4;
  long v;
  long result;
  v_10 = (unsigned char)152;
  v_6 = 18446744073709508390ULL;
  v_4 = p_17;
  v = -20465L;
  v_12 = (unsigned char)(33817LL << ((((long)((int)v_4 * -49) - v % (long)(
                                                                p_15 + 207)) - (long)(
                                      ((int)p_17 >> 12ULL) / (((int)p_17 - (int)p_17) + 568))) & 63L));
  v_8 = (double)(- ((long long)(! v_10) & ! ((long long)v_12 % (p + 98LL))));
  v = (long)v_8;
  result = (long)(~ ((unsigned long long)(99116UL - (unsigned long)(~ v)) / (
                     (unsigned long long)((unsigned long)v_4 - 4294910103UL) / (
                     - v_6 + 29ULL) + 636ULL)));
  return result;
}


