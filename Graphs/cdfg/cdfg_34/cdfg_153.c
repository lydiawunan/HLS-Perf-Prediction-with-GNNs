#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 74288046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned char p_9[5][5], long p_11, short p_13, short p_15)
{
  unsigned char v_6;
  float v_4;
  int v;
  long result;
  v_4 = -995.737426758f;
  v = (int)p_9[3][1];
  result = p_11;
  v_6 = (unsigned char)((long)((int)p_15 * 1247) + p_11);
  while (-1LL != (long long)v) {
    result = (float)v_6 - v_4 * 1.84467440737e+19f;
    v_6 = (unsigned char)((26537L / ((long)p_9[3][2] % (p_11 + 438L) + 348L)) * (
                          - result / (long)((int)(- p_13) + 1013)));
    v_4 = (float)78LL;
    v = (int)p;
  }
  while_0_break: ;
  return result;
}


