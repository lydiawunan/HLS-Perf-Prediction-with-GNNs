#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 215859800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, int p_7)
{
  int v_13;
  long v_11;
  short v_9;
  unsigned char v_5;
  unsigned int v;
  unsigned long result;
  v_13 = 47509;
  v_11 = -331581170L;
  v_9 = (short)(- 761.595755198);
  v_5 = (unsigned char)((int)v_9 - (int)((short)-1.24921865626e+38f));
  v = (unsigned int)(~ (~ p) % (long)(~ ((int)v_5 - 37) + 387) >> (((long)(
                                                                    p_7 / (
                                                                    (int)v_9 + 403)) * v_11) % (long)(
                                                                   - (
                                                                   16966 + v_13) + 525) & 31L));
  result = (unsigned long)(~ v);
  return result;
}


