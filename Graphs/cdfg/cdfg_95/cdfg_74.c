#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1041064677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned short p_5, signed char p_7[3][5][3],
                unsigned int p_9, short p_13[4])
{
  short v_15;
  float v_11;
  signed char v;
  signed char result;
  v_15 = (short)p_5;
  v_11 = (float)(! ((unsigned long long)p_5 ^ 441692775ULL) / (unsigned long long)(
                 (int)(! (! v_15)) + 450));
  if (v_11 + (float)p != (float)p_13[0]) {
    v = (signed char)((int)p_5 | (int)p_7[0][3][2]);
    result = (signed char)((p * (long long)v) * -30LL);
  }
  else result = (signed char)((double)((p_9 >> 30) + 253U) * -1.89186642307e+38);
  return result;
}


