#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 174514112
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, short p_13, char p_15)
{
  short v_11;
  short v_9;
  unsigned char v_7;
  unsigned long v_4;
  unsigned int v;
  unsigned int result;
  v_11 = (short)-22277;
  v_9 = (short)-26258;
  v_7 = (unsigned char)254;
  v_9 = (short)((1 + (unsigned int)((int)((char)p) / ((int)p_15 + 240) + (int)v_9)) + (unsigned int)(- p));
  v_4 = (unsigned long)(- ((int)v_9 - (int)((short)((float)v_11 * p + (float)(
                                                    651410113LL & (long long)p_13)))));
  v = (unsigned int)v_7;
  result = (unsigned int)((0LL % ((307146517LL + (long long)v_4) + 36LL)) * (long long)(- p));
  return result;
}


