#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 11269930
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, unsigned int p_11)
{
  unsigned long long v_8;
  signed char v_6;
  int v_4;
  short v;
  double result;
  v_6 = (signed char)p;
  v_8 = (unsigned long long)(~ 102117137L);
  v_4 = (int)(((((unsigned long long)v_6 | v_8) * 24756ULL) * (unsigned long long)(
               (int)p & -35775)) * (unsigned long long)p_11);
  v = (short)v_4;
  result = (double)(! v);
  return result;
}


