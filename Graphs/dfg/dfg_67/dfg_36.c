#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 932103541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p)
{
  long long v_15;
  unsigned long v_13;
  int v_10;
  unsigned short v_8;
  unsigned long long v_6;
  signed char v_4;
  unsigned long v;
  long long result;
  v_15 = (long long)p;
  v_13 = (unsigned long)p;
  v_8 = (unsigned short)38878;
  v_6 = (unsigned long long)p;
  v_4 = (signed char)126;
  v = 3647022030UL;
  v_13 = (unsigned long)((133925422ULL - ! v_6) * (unsigned long long)v_13);
  v_10 = (int)((unsigned long)p / ((v_13 << (v_15 & 31LL)) + 553UL));
  v_6 = (unsigned long long)(((long long)((int)v_8 & v_10) * (14407LL / (
                                                              (long long)-2.21752479492e+38 + 912LL))) * 31LL - -33LL);
  result = (long long)(! ((unsigned long long)(-679.597961426f + (float)(
                                               v - (unsigned long)v_4)) * ~ (! v_6)));
  return result;
}


