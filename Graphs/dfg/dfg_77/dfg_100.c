#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 484610372
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned short p_9, long p_11)
{
  unsigned char v_7;
  double v_5;
  int v;
  unsigned char result;
  v_7 = (unsigned char)p;
  v_5 = (double)(66 % ((int)p + 735));
  result = (unsigned char)p_9;
  v = (int)(- (- v_5 - (double)(-60309 + (int)v_7)) / ((double)(((long)(
                                                                 (int)p_9 + (int)result) | ~ p_11) - 76L) + 933.));
  result = (unsigned char)(- (v / ((int)(- p) / 555 + 122)));
  return result;
}


