#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1072792308
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, short p_7, unsigned long p_9,
          unsigned int p_17[4][3][1], unsigned int p_19)
{
  float v_15;
  char v_13;
  int v_11;
  signed char v_4;
  unsigned short v;
  short result;
  v_15 = -3.23703788982e+38f;
  v_11 = (int)p_19;
  v_13 = (char)((double)v_15 / ((- ((double)p_17[1][1][0] - 725.305739976) - (double)(! (! p_19))) + 622.));
  v_4 = (signed char)(! (p_9 % (unsigned long)(v_11 + 43)) * (unsigned long)v_13);
  v = (unsigned short)2.1348738397e+38;
  result = (short)(~ (((unsigned long long)((int)v * (int)v_4) + ~ p) - (unsigned long long)p_7));
  return result;
}


