#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 38239332
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[5], unsigned long long p_9[1][2][3])
{
  float v_13;
  unsigned char v_11;
  signed char v_6;
  unsigned short v_4;
  signed char v;
  unsigned short result;
  v_13 = -7400380416.f;
  v_11 = (unsigned char)97;
  v_4 = (unsigned short)64051;
  if ((int)v_11 != (int)((unsigned char)(- (v_13 / ((float)p[1] + 406.f)) + 206085376.f))) {
    v_6 = (signed char)(! (! (p[0] % (p[3] + 819))));
    v = (signed char)(~ v_4);
    result = (unsigned short)(((-15200 - (int)v) + (int)v_4) / (! (-83 - (int)v_6) + 431));
  }
  else result = (unsigned short)(! (- p_9[0][1][0] - 546810587ULL));
  return result;
}


