#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 734006219
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, short p_7, unsigned long long p_9, long p_11,
              signed char p_15[1][3][1])
{
  unsigned int v_17;
  float v_13;
  unsigned int v_4;
  unsigned char v;
  long long result;
  v_17 = 4294940740U;
  v_13 = (float)p_15[0][2][0];
  v = (unsigned char)p_7;
  v = (unsigned char)((unsigned long)((long)(((int)v + (int)p_15[0][0][0]) % 35) & p_11) + (unsigned long)v_17);
  v_4 = (unsigned int)(- (- v_13));
  v_4 = (unsigned int)(((18446744073709541420ULL * (unsigned long long)p_7 - (unsigned long long)(
                         111U - v_4)) + 9406ULL) * (unsigned long long)(
                       p_11 - 40716L));
  result = (long long)(((unsigned long)(((float)v + 1.26847731124e+38f) * (float)v_4) | 
                        4294947955UL % ((unsigned long)(-17. + p) + 316UL)) / (unsigned long)(
                       ~ (((int)p_7 + 62) + (int)(-681.201171875f - (float)p_9)) + 1007));
  return result;
}


