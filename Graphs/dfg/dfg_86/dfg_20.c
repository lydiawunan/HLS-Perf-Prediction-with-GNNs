#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72616992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p)
{
  int v_7;
  float v_5;
  long v;
  unsigned long result;
  v_7 = (int)p;
  v_5 = (float)(((unsigned long long)(! v_7) * 18446744073709498416ULL) % 54078ULL + 18446744073332425283ULL);
  v = (long)v_5;
  v = (long)(- (- ((unsigned long)(~ v) - 17419UL)));
  result = (4294908561UL + (unsigned long)(- (! p))) + (unsigned long)(- v);
  return result;
}


