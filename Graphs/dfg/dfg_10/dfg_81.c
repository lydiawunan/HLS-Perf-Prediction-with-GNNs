#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 489851011
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, long p_5, unsigned short p_11, short p_13[4][3])
{
  unsigned char v_9;
  short v_7;
  signed char v;
  int result;
  v = (signed char)36;
  result = -11518;
  v_7 = (short)(~ (! ((int)(- p_11) + (int)(! p_13[1][0]))));
  v_9 = (unsigned char)((int)v | ((int)v_7 + result));
  v = (signed char)((long)(((p - -191579024) / 692) % ((int)v + 614)) * (
                    ~ (32L % (p_5 + 188L)) - (long)((int)v_7 / ((int)v_9 + 559))));
  result = ((243 * result) * p) / ((int)(~ v) + 447);
  return result;
}


