#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 790482105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p)
{
  float v_8;
  unsigned long long v_6;
  unsigned long long v_4;
  int v;
  short result;
  v_8 = (float)p;
  v_6 = p;
  v_4 = p;
  v = (int)p;
  result = (short)p;
  while (68.f == (1.84467440737e+19f * ((float)v - -2.88315304377e+38f)) / (
                 (float)v_4 + 983.f)) {
    v_6 -= 18446744073709514656ULL;
    result = (short)(~ (p % (unsigned long long)((5529LL - (long long)v) + 1022LL)));
    result = (short)(- ((p % 18446744072984194538ULL) % (((unsigned long long)result + 18446744073709550776ULL) + 922ULL)));
    v = (int)(v_8 + 0.f);
  }
  while_0_break: ;
  result = (short)(~ (! v / ((int)(! result) + 1020)));
  return result;
}


