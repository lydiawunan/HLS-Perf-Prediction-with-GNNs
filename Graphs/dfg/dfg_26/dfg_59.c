#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 474367530
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, unsigned char p_9)
{
  short v_11;
  short v_7;
  unsigned char v_4;
  int v;
  signed char result;
  v_11 = (short)16106;
  result = (signed char)127;
  v_7 = v_11;
  v_4 = (unsigned char)((unsigned long)v_7 / (34660UL * ! (! p) + 468UL));
  v = (int)(! ((unsigned long)(49473L - (long)v_4) + - p) + - (p * (unsigned long)result) % (unsigned long)(
                                                            - ((int)v_7 << (
                                                               (int)p_9 & 15)) + 298));
  result = (signed char)(~ (! v));
  return result;
}


