#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 99761980
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[1], long long p_7, unsigned char p_13[2][5])
{
  unsigned long long v_11;
  signed char v_9;
  float v_4;
  short v;
  long result;
  v_11 = (unsigned long long)p_7;
  v_9 = (signed char)p_13[1][3];
  v_4 = (float)p_7;
  v = (short)31430;
  result = (long)(- v_4);
  while (-29 == (int)((signed char)(((double)((int)v / ((int)((short)v_4) + 917)) + 
                                     -8.42406360363e+36 / ((double)result + 429.)) / (
                                    (double)((long long)(- p[0]) & - p_7) + 321.)))) {
    result = v_11 - (unsigned long long)v_9 / 29059ULL;
    v_4 = (float)((23UL - (unsigned long)result) + (unsigned long)p_13[1][4]);
    v = (short)p_7;
    result = (long)(- ((int)((short)p[0]) * (int)v << ((int)(! v) & 31)));
  }
  while_0_break: ;
  return result;
}


