#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536377883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, signed char p_7)
{
  signed char v_4;
  double v;
  signed char result;
  v_4 = p_7;
  v = (double)(- ((unsigned long long)((long)v_4 / 956576622L) - ~ (18446744073709515270ULL % (unsigned long long)(
                                                                    (int)p + 80))));
  result = (signed char)v;
  return result;
}


