#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 922207356
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, double p_4, signed char p_6,
                unsigned long long p_8, double p_10[2][1][3])
{
  unsigned long v_13;
  char v;
  signed char result;
  v_13 = (unsigned long)p_4;
  v = (char)(v_13 % (p + 639UL) | 3764UL);
  if (! (- ((unsigned long)v / 2834UL)) != 103UL) result = (signed char)p;
  else result = (signed char)p_4;
  return result;
}


