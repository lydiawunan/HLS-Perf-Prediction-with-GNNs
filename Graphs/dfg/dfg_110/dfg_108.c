#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970153752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p)
{
  long long v_10;
  double v_8;
  long long v_6;
  unsigned int v_4;
  short v;
  unsigned long long result;
  v_8 = (double)p;
  v_4 = (unsigned int)p;
  v_10 = 260467028LL;
  v = (short)(! v_10 + (long long)p);
  v_6 = (long long)v_8;
  result = (unsigned long long)((unsigned int)1.13319495754e+38f / ((
                                                                    (unsigned int)(- v) + v_4) + 442U)) / (
           ! (18446744073709537585ULL + (18446744072996489266ULL << (
                                         v_6 & 63LL))) + 180ULL);
  return result;
}


