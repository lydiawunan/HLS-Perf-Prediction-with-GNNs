#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 494118711
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p)
{
  unsigned short v_6;
  double v_4;
  float v;
  unsigned int result;
  v = 71.1827392578f;
  result = (unsigned int)(- p);
  v_6 = (unsigned short)p;
  v_4 = (double)((unsigned long long)v % (~ ((unsigned long long)v_6 % 728612262ULL) % (unsigned long long)(
                                          - ((int)p / 199) + 192) + 74ULL));
  result = (unsigned int)((double)((float)result - - (- v)) + - (((double)result - v_4) * (double)(~ v_6)));
  return result;
}


