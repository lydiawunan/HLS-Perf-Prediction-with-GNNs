#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 856832376
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p)
{
  long long v_11;
  long v_8;
  unsigned long long v_6;
  double v_4;
  unsigned char v;
  long long result;
  v_11 = -58429LL;
  v_8 = (long)p;
  v = (unsigned char)p;
  v_6 = (unsigned long long)(~ v_11);
  v_4 = (double)(! (v_6 % 18446744072759710478ULL) % ((unsigned long long)(! v_8) * (
                                                      (unsigned long long)-628.963086739 ^ v_6) + 91ULL) - (unsigned long long)p);
  result = (long long)(- -3754739456.f);
  result = (long long)((int)v << (((unsigned long long)(0 - (unsigned int)(
                                                        (int)((unsigned short)v_4) % 27972)) + (
                                   (unsigned long long)result % 65162ULL + 4294944606ULL)) & 7ULL));
  return result;
}


