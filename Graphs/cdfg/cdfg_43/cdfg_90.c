#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631017110
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p)
{
  long long v_10;
  unsigned short v_8;
  float v_6;
  unsigned int v_4;
  long long v;
  long long result;
  v_10 = (long long)p;
  v_4 = 4294966251U;
  v = (long long)p;
  result = 24396464LL;
  v_6 = (float)(v_10 * (long long)(48 ^ (int)p) - 8992LL);
  while (-63989LL != v) {
    v_8 = (double)v_6 - ((double)v_4 + 2.81464619955e+38);
    result = (long long)v_8;
    v_4 = 3223071914U;
    v = (long long)(- 730.457458496f);
  }
  while_0_break: ;
  return result;
}


