#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 992747378
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned short p_5, float p_7)
{
  short v;
  long result;
  result = (long)p_7;
  v = (short)((unsigned long)((long)p * result) + (((unsigned long)p_5 + 13665036UL) / (unsigned long)(
                                                   (int)p % ((int)p_5 + 445) + 344)) * (unsigned long)(- (
                                                  652.945068359f / ((float)p_5 + 224.f))));
  result = (long)(~ v);
  return result;
}


