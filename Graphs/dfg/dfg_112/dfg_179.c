#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 834096685
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned char p_5, unsigned int p_7, short p_11)
{
  int v_15;
  long v_13;
  unsigned char v_9;
  unsigned int v;
  long result;
  v_15 = (int)p;
  v = 3687335570U;
  v_13 = (long)(! v_15);
  v_9 = (unsigned char)(- v % 19198U);
  result = (long)((unsigned long)((unsigned int)(- (-2.7554228398e+38 * (double)p_5)) * p_7) * (unsigned long)(
                  (long)v_9 | ((long)p_11 % (v_13 + 898L)) % 46052L));
  result = (long)(- (4007250196LL * ((long long)result * p)) + (long long)v);
  return result;
}


