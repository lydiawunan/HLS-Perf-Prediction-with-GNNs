#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844800524
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  unsigned char v_4;
  long v;
  double result;
  v_4 = (unsigned char)190;
  v = 55618L;
  if (18446744073709551567ULL <= ((unsigned long long)v_4 + 18446744073709499477ULL) * (unsigned long long)(~ v) << (
                                 (16455L - (v >> ((int)v_4 & 31))) & 63L)) 
    v = 13763L;
  else v = -179987068L;
  result = (double)v;
  return result;
}


