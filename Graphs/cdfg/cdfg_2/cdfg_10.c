#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 41478168
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[2][1][3], short p_23)
{
  unsigned char v_25;
  long v_20;
  char v_18;
  unsigned long v_16;
  char v_14;
  long long v_12;
  long v_10;
  unsigned char v_8;
  unsigned int v_6;
  unsigned int v_4;
  unsigned char v;
  signed char result;
  v_25 = (unsigned char)112;
  v_18 = (char)-40;
  v_16 = (unsigned long)p_23;
  v_14 = (char)25;
  v_12 = 1038813791LL;
  v_10 = (long)p[1][0][2];
  v_8 = (unsigned char)56;
  v_4 = (unsigned int)p[1][0][0];
  result = (signed char)p_23;
  if (121740116LL <= (long long)(! ((long)((int)v_18 * -71) - v_10))) {
    v_10 = (long)(- ((v_12 / (long long)((int)v_14 + 513)) % (long long)(
                     (v_16 << ((int)v_14 & 31)) + 385UL)));
    v_6 = (unsigned int)((v_10 * (long)-2.74573563254e+38) / (long)((int)(~ (~ result)) + 424));
    v = (unsigned char)((4294967075U % ((v_4 - 98U) + 1015U)) * (812836972U * v_6 - (unsigned int)(
                                                                 (int)v_8 - 31)));
  }
  else {
    v_20 = (long)v_25;
    v_18 = (char)p_23;
    v = (unsigned char)(- ((long long)((long)v_18 - v_20) + (-92LL & p[0][0][0])));
  }
  result = (signed char)(~ v);
  return result;
}


