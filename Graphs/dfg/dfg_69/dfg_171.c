#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928992691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p[2][3][2])
{
  int v_8;
  long long v_6;
  signed char v_4;
  long v;
  long long result;
  v_8 = -343333943;
  v_6 = 45468LL;
  result = (long long)(~ 386579359UL);
  v_4 = (signed char)((unsigned long long)((double)(- result) - (2.63206630944e+38 - (double)(
                                                                 v_8 << 10ULL))) % (
                      18446744073709486827ULL * ~ (p[1][1][1] / 727ULL) + 68ULL));
  v = (long)(- v_6);
  result = (long long)v - ~ (~ result % (long long)((int)(! v_4) + 163));
  return result;
}


