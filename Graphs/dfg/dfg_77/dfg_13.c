#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12199066
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, unsigned long p_9)
{
  double v_7;
  unsigned short v_4;
  signed char v;
  unsigned long result;
  v_7 = (double)p_9;
  result = p_9;
  v_4 = (unsigned short)((long)v_7 % -14974L);
  v = (signed char)((float)((unsigned long)v_7 / (result + 486UL)) - - (- (
                    p + (float)p_9)));
  v = (signed char)(p + (float)((unsigned long)(~ v_4) % ((result & 4294967190UL) % (unsigned long)(
                                                          22504 * (int)v + 387) + 440UL)));
  result = (unsigned long)((int)v % ((int)(- v_4) + 214));
  return result;
}


