#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191368600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, float p_9, float p_11, unsigned long p_13,
                int p_15)
{
  int v_6;
  signed char v_4;
  char v;
  signed char result;
  v_4 = (signed char)(~ (- (! p_15)) % (! p_15 + 176));
  v_6 = (int)-440.997253418f;
  v = (char)(p_13 % 4294967280UL);
  result = (signed char)(((int)(! (! v)) - (((int)v_4 + v_6) + (int)p)) - (int)(
                         (p_9 - 104.f) * ((p_11 - p_11) / 30825.f)));
  return result;
}


