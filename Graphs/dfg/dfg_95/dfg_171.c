#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 356851455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, signed char p_7[4][1], short p_9)
{
  long long v_4;
  signed char v;
  char result;
  v_4 = (long long)((int)p_7[2][0] + (int)p_9);
  v = (signed char)((double)p - - (-34211947.3947 + (double)((int)p / (
                                                             (int)p + 600))));
  result = (char)((long long)v + - (~ v_4));
  return result;
}


