#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1465870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, short p_5, short p_7, unsigned int p_11, double p_13)
{
  unsigned int v_9;
  short v;
  short result;
  v_9 = (unsigned int)p_7;
  if (37 >> ((v_9 - - p_11) & 31U) == (int)p_13) v = (short)-19202;
  else {
    result = p_7;
    v = (short)(! (-1975965075 + (151 + (int)result)));
  }
  result = (short)(! (((long)p * -48687L) % (long)(((int)v - (int)p_5) + 839)));
  return result;
}


