#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274059250
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, float p_4, int p_6[1], double p_8, float p_17)
{
  unsigned long long v_19;
  short v_15;
  unsigned char v_13;
  short v_11;
  unsigned long long v;
  long long result;
  v_19 = (unsigned long long)p_6[0];
  v_13 = (unsigned char)134;
  v_11 = (short)p;
  v = 18446744073028825148ULL;
  result = -1618LL;
  v_15 = (short)(p_8 * - (p_8 + (double)v_19));
  while ((long long)(- (-190497038L % (long)(p + 115) & (long)((int)p_4 + p_6[0]))) != ~ (
         (long long)(p_8 - -31.) + result)) {
    v = (unsigned long long)v_13 / (v * 36054ULL + 603ULL);
    v_15 = (short)(p_8 - (((double)p_17 + p_8) + (double)((int)v_15 | -106)));
    v_13 = (unsigned char)((947628866UL ^ (unsigned long)(-26 * (int)v_15)) - (unsigned long)p);
    result = (long long)v_11;
  }
  while_0_break: ;
  return result;
}


