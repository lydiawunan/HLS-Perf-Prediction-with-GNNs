#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 748537020
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(signed char p, unsigned char p_7, int p_9, double p_11, char p_13)
{
  unsigned long v_5;
  long v;
  short result;
  result = (short)((int)p_13 - ! (((int)p_13 + (int)((char)p_11)) % (
                                  (int)(! p_7) + 227)));
  v_5 = (unsigned long)(((int)p_7 & 83) / (~ (~ p_9) / ((((int)result >> (
                                                          (int)((short)p_11) & 15)) + 105) + 856) + 211));
  v = (long)(- (~ (! v_5)) - 116UL);
  result = (short)(~ ((long)p % ((2657L + v) % (long)((int)p + 1006) + 13L)));
  return result;
}


