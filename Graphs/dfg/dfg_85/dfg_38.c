#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 700306983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p[5], float p_4, unsigned short p_7, signed char p_9,
                   unsigned int p_11)
{
  int v_13;
  unsigned long v;
  unsigned short result;
  v_13 = -99;
  v = (((unsigned long)(p[4] / (long)((int)p_7 + 290)) + (unsigned long)(
        (unsigned int)p_9 + p_11)) - (unsigned long)(((long)v_13 & p[4]) - 
                                                     (long)v_13 * 34284L)) - (unsigned long)(- (
      (long)((int)p_7 - v_13) * 483248280L));
  result = (unsigned short)((unsigned long)(- (- p[2] - (long)(- p_4))) | - (
                            - v / 2156976692UL));
  return result;
}


