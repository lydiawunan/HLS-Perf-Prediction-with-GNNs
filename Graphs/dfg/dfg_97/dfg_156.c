#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 553088231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned short p_4, short p_9,
                int p_11[3][3][2])
{
  float v_7;
  short v;
  signed char result;
  v_7 = 125.629653931f;
  v = (short)(((long)((int)p % 35525 | ((int)((short)v_7) | (int)p_9)) % 1050761947L) * (long)(
              646416832.f + 4210154752.f / ((float)(~ p_11[0][0][1]) + 179.f)));
  v = (short)(! (~ (656156390U + (unsigned int)(-27 - (int)v))));
  result = (signed char)v;
  result = (signed char)(! ((unsigned int)((int)result / ((int)p + 723) << 2LL) * (
                            ((unsigned int)p - 3948U) | (unsigned int)p_4)));
  return result;
}


