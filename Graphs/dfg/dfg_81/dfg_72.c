#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669021212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, short p_11, unsigned short p_13[4][4])
{
  unsigned char v_9;
  short v_7;
  unsigned long v_5;
  signed char v;
  unsigned int result;
  v_9 = (unsigned char)p;
  result = (unsigned int)p_13[2][0];
  v_7 = (short)((int)(- p_11) / ((int)p_13[0][0] + 649));
  v_5 = (unsigned long)(~ (- (4294967235U + 16917U * result)));
  v = (signed char)(- (! ((v_5 % (unsigned long)((int)v_7 + 269)) % (unsigned long)(
                          (-14 + (int)v_9) + 143))));
  result = (unsigned int)(- ((long)v * p));
  return result;
}


