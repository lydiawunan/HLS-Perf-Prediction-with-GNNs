#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557581329
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned short p_5, unsigned int p_7,
                  short p_9, unsigned long long p_15)
{
  int v_13;
  short v_11;
  double v;
  unsigned long result;
  v_11 = (short)-19068;
  v_13 = (int)(- p_15 + 86373206ULL);
  v = (double)(((int)(~ (- p_9)) - (int)p_5) + ~ (((int)v_11 >> (v_13 & 15)) + (int)(- p)));
  result = (unsigned long)(~ (-878522216LL * ((30314LL / (long long)(
                                               (int)p_5 + 198)) * (long long)(
                                              p_7 % 79U))));
  result = - (((unsigned long)((long)p + -64220L) / (result % ((unsigned long)v + 321UL) + 374UL)) * (unsigned long)p_5);
  return result;
}


