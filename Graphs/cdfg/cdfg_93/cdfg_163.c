#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 182992427
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, double p_4, int p_7, signed char p_11, int p_13)
{
  char v_15;
  unsigned short v_9;
  int v;
  short result;
  v_15 = (char)-5;
  if (1 <= (long long)((int)p + (185 - (int)v_15))) v = p_7;
  else {
    v_9 = (unsigned short)(-4294943563U);
    v = (int)(0 - (long)(((int)v_9 * 9002) / (((int)p_11 | p_13) + 126)));
  }
  result = (short)((((double)p * p_4) * ((double)v + p_4)) * (double)(
                   (int)-5511349554.21 << 29));
  return result;
}


