#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 310744591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, int p_9, unsigned short p_11,
                 signed char p_13, long long p_15)
{
  char v_7;
  unsigned int v_4;
  short v;
  unsigned int result;
  result = (unsigned int)p_15;
  v_4 = (unsigned int)((long long)p_11 ^ p_15);
  v_7 = (char)(- ((result % (unsigned int)((int)p_11 % 28235 + 980)) % (unsigned int)(
                  (int)(- p_13) + 624)));
  v = (short)(p - (unsigned int)(! ((int)v_7 * p_9)) * result);
  result = - (- (((unsigned int)v - v_4) - - result));
  return result;
}


