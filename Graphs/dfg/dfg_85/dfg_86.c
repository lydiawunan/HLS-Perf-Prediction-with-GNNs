#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 561172536
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p[3][1], int p_7, unsigned int p_11,
        unsigned char p_15)
{
  short v_17;
  unsigned int v_13;
  float v_9;
  unsigned short v_5;
  float v;
  int result;
  v_17 = (short)14480;
  v_13 = (unsigned int)p_7;
  v_5 = (unsigned short)p_15;
  v_9 = (float)(((int)(! p_15) * (int)p_15) * ((int)-3773618765.83 - 
                                               ((int)((unsigned char)-2599686462.12) / (
                                                (int)p_15 + 422)) % (
                                               -16425 / ((int)v_17 + 271) + 880)));
  result = (int)((unsigned int)(0.f / ((v_9 * (float)p_11) / 79.f + 577.f)) / (
                 v_13 + 444U));
  v = (float)p_7;
  result = ~ ((result * (int)v) * ((int)p[2][0] & (int)v_5)) % ((int)p[0][0] + 716);
  return result;
}


