#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 34351636
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p)
{
  short v_8;
  char v_6;
  signed char v_4;
  double v;
  unsigned long result;
  v_4 = (signed char)-91;
  v_6 = (char)(-15185ULL);
  v_8 = (short)164;
  v = (double)(~ (- ((int)v_4 / ((int)v_6 + 997)) << ((long)(- v_8) * (
                                                      60331L * (long)p) & 31L)));
  result = (unsigned long)(~ (18446744073709543070ULL / ((unsigned long long)v % 901873781ULL + 109ULL)));
  return result;
}


