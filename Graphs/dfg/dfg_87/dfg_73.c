#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 848707482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, char p_5)
{
  unsigned long long v_7;
  char v;
  signed char result;
  v_7 = 6536ULL;
  result = (signed char)(- v_7);
  v = (char)(- ((int)p_5) - ~ (99 + (int)p_5));
  result = (signed char)(! (- p) % (unsigned int)(- ((int)result / ((int)v + 19)) + 319) + (unsigned int)p_5);
  return result;
}


