#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 435363775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned long p_9, unsigned long p_15)
{
  int v_17;
  char v_13;
  unsigned char v_11;
  long v_7;
  unsigned int v_4;
  unsigned long v;
  short result;
  v_17 = -54573;
  v_13 = (char)p_15;
  v_11 = (unsigned char)p;
  v = ((~ p_9 ^ (unsigned long)((int)v_11 - (int)v_13)) - (p_15 / (unsigned long)(
                                                           v_17 + 435) | 4294935787UL)) / (
      (unsigned long)-9851147264.f + 97UL);
  v_7 = -3648L;
  v_4 = (unsigned int)((216. * p) * (double)(v_7 + (long)(- (- p))));
  result = (short)(- (v * - ((unsigned long)v_4 % 2334UL)));
  return result;
}


