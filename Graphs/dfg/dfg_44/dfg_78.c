#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 788864244
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p[3][2][4], unsigned short p_9[2][1][5],
                   long p_11)
{
  unsigned short v_6;
  unsigned int v_4;
  unsigned char v;
  unsigned short result;
  v_4 = 41220U;
  v_6 = (unsigned short)(~ (~ ((long)p_9[0][0][4] % (p_11 + 760L))));
  v = (unsigned char)p[2][1][3];
  result = (unsigned short)((unsigned int)(- v) ^ ((37513U + v_4) % (
                                                   v_4 + 128U)) * (unsigned int)v_6);
  return result;
}


