#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 349207901
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[5][3], unsigned short p_4, unsigned long long p_7,
          int p_11, long p_21)
{
  char v_19;
  unsigned char v_17;
  char v_15;
  float v_13;
  long v_9;
  unsigned short v;
  short result;
  v_19 = (char)18;
  v_17 = (unsigned char)p_4;
  if ((unsigned long long)(~ ((long)v_19 / (p_21 + 561L)) * ~ (- p_21)) <= 
      42796ULL * - (~ p_7)) {
    v_15 = (char)3588433664.f;
    v_13 = (float)v_17;
    v_9 = (long)((- p_11 - (int)v_13) % ((int)v_15 + 439));
  }
  else v_9 = (long)(! (! (p_11 % 37656)));
  if (p_7 > (unsigned long long)v_9) result = (short)((int)p[2][2] >> (
                                                      (int)p_4 & 15));
  else {
    v = (unsigned short)p[0][0];
    result = (short)(-1.49210284375e+38f * (float)(42 + (int)(! v)));
  }
  return result;
}


