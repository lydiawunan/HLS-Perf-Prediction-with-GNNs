#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 639385947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, double p_9)
{
  unsigned int v_7;
  short v_5;
  unsigned long long v;
  unsigned short result;
  v_7 = (unsigned int)p_9;
  v_5 = (short)-4585;
  result = (unsigned short)56959;
  v = (unsigned long long)(- ((double)((unsigned int)v_5 * v_7) / (- p_9 + 187.)));
  result = (unsigned short)((unsigned long long)(! p) / (((unsigned long long)result & ~ v) + 383ULL));
  return result;
}


