#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 634736804
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p)
{
  unsigned int v_11;
  char v_9;
  int v_7;
  unsigned long long v_4;
  float v;
  double result;
  v_9 = (char)p;
  v_7 = 514316903;
  v_11 = (unsigned int)(! (- v_9));
  v_4 = (unsigned long long)(~ ((unsigned long)((182 << (v_7 & 7)) | (
                                                (int)v_9 | (int)v_9)) / (
                                (unsigned long)(4294967180U - v_11) * 44683UL + 32UL)));
  v = (float)(18446744073709551500ULL * (v_4 + 1044771438ULL) | (unsigned long long)p);
  result = (double)v;
  return result;
}


