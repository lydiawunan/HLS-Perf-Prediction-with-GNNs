#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 209193545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, long p_7, unsigned long p_13, double p_15)
{
  long v_11;
  signed char v_9;
  float v_5;
  unsigned short v;
  unsigned int result;
  v_11 = 1001055211L;
  v_9 = (signed char)p_15;
  v_5 = (float)(- ((unsigned long)(! (! v_9)) - ((unsigned long)v_11 * p_13) % (
                                                (unsigned long)p_15 + 101UL)));
  result = (unsigned int)(255L / (p_7 + 657L));
  v = (unsigned short)(((unsigned long)(- (result * 17631U)) & ((unsigned long)p * 3360UL | (unsigned long)p)) + (unsigned long)(
                       (int)(v_5 - v_5) ^ -35870));
  result = (unsigned int)v;
  return result;
}


