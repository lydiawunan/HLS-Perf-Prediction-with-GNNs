#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669365416
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p[1], signed char p_7, unsigned char p_9[1],
          unsigned short p_11[3][3], long long p_17)
{
  long v_15;
  float v_13;
  signed char v_5;
  unsigned short v;
  float result;
  v_13 = -6.7694164645e+37f;
  v = (unsigned short)p_9[0];
  v_15 = (long)(- (! p_17 * (long long)p_7));
  if (- (-32166.f * (v_13 + (float)v_15)) >= 2147705088.f) {
    v = v;
    result = (float)(~ ((unsigned long)p[0] / 4294923398UL + (unsigned long)(
                        34 % ((int)((signed char)-5161111552.f) + 752))));
    result = (float)((int)((unsigned short)(- result)) >> ((int)(- (~ v)) & 15));
  }
  else {
    v_5 = (signed char)(! (! p[0]) % ((long)((double)(! p_7) - -5223269289.37 * (double)p_9[0]) + 923L));
    result = (float)v_5;
  }
  return result;
}


