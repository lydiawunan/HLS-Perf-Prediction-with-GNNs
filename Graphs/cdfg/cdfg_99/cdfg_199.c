#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 720299955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, int p_4, unsigned short p_6, short p_8,
        unsigned long long p_11[3])
{
  double v_17;
  long v_15;
  short v_13;
  short v;
  int result;
  v_17 = (double)p_11[0];
  v_15 = -43031L;
  v_13 = (short)-16169;
  v = p_8;
  result = 55536;
  while ((long)(result - p_4) > - ((p & (long)v_13) % (! v_15 + 119L))) {
    result = v_17 - 19.;
    v_15 = 42787L;
    v = (short)(185 | (int)(! (- p_6)));
    v_13 = (short)0;
  }
  while_0_break: ;
  if (0 - (((int)v >> (p_11[2] & 15ULL)) & 232) < (~ p_4 ^ - ((int)p_8 - -73))) {
    result = ((int)(~ p_6) % 152) % ((int)p_8 + 149);
    result = (int)(- ((p % (long)(p_4 + 801)) / (long)(result + 780)));
  }
  else result = (int)p;
  return result;
}


