#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 686995982
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, short p_9)
{
  int v_7;
  unsigned char v_5;
  unsigned int v;
  signed char result;
  v_7 = -12201777;
  v_5 = (unsigned char)p;
  v = (unsigned int)p;
  result = (signed char)(! p_9);
  result = (signed char)(((unsigned int)(p + p) + v / (unsigned int)(
                                                  (int)result + 601)) - (unsigned int)(
                         ((int)((short)8.72318954388e+37f) + 18126) - 
                         (int)v_5 % (v_7 + 257)));
  return result;
}


