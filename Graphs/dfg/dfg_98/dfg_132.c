#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882776781
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, short p_13, unsigned int p_15, unsigned long p_17)
{
  unsigned char v_11;
  double v_8;
  int v_6;
  char v_4;
  long long v;
  short result;
  v_11 = (unsigned char)149;
  v_8 = -899.581616082;
  v_4 = (char)59;
  v = 42296LL;
  v_8 = (double)(! (51520LL - (long long)((unsigned long)(94 - (int)((char)v_8)) % (
                                          4294967277UL % (p_17 + 681UL) + 991UL))));
  v_8 = (double)(((long long)(52 + (int)p_13) - (p * (long long)p_15 + (long long)(! p_15))) * (long long)(- (
                 668313595. * v_8)));
  v_6 = (int)(~ v);
  result = (short)((((unsigned long long)v % 18446744073709490693ULL - (unsigned long long)v_4) % (unsigned long long)(
                    3913765009UL % (unsigned long)((v_6 | (int)v_8) + 866) + 772UL)) / (unsigned long long)(
                   ~ (p - (long long)v_11) % 32919LL + 85LL));
  return result;
}


