#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59833433
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, int p_9[5], unsigned long p_11)
{
  long v_13;
  short v_7;
  char v_5;
  float v;
  short result;
  v_13 = (long)p_9[1];
  result = (short)10485;
  v_5 = (char)(! ((unsigned long)p_9[4] * (p_11 / 4027UL + (unsigned long)(
                                           (long)p_9[2] - v_13))));
  v_7 = result;
  v = (float)p;
  result = (short)((int)((float)p - - (v + (float)v_5)) % ((1336 >> (
                                                            (int)(! (! v_7)) & 15)) + 606));
  return result;
}


