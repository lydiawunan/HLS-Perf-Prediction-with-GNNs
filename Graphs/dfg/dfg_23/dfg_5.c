#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 580288387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned long long p_7)
{
  double v_4;
  char v;
  short result;
  v_4 = -8068257907.59;
  result = (short)p_7;
  v = (char)(~ (7585ULL + ((unsigned long long)v_4 - 18446744073069140279ULL) % (unsigned long long)(
                          (int)(- p) + 184)));
  v_4 = (double)(! (! ((unsigned long)result * (8895UL * (unsigned long)result))));
  result = (short)((double)v / (v_4 + 44.));
  return result;
}


