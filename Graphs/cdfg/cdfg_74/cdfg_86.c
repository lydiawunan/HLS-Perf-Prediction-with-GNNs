#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 131021307
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[2][5][2])
{
  unsigned long long v_4;
  double v;
  short result;
  v_4 = 18446744072891978187ULL;
  v = (double)((p[0][1][1] - 253L) * 687L - -47L);
  result = (short)(-1LL * (long long)(26 * (int)((signed char)-2.31014388968e+37f) + (int)(
                                      v * (double)v_4)));
  return result;
}


