#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 905284834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[5][1][3], long long p_9, long p_11[5])
{
  unsigned char v_19;
  float v_17;
  signed char v_15;
  unsigned int v_13;
  long v_7;
  unsigned long long v_5;
  long v;
  unsigned long long result;
  v_19 = (unsigned char)117;
  v_17 = (float)p_11[0];
  v_15 = (signed char)41;
  v_13 = (unsigned int)p_9;
  if ((double)((float)((p_9 >> (p_11[0] & 63L)) + (long long)v_13) - 
               ((float)v_15 - v_17) / ((float)(83097400UL * (unsigned long)v_19) + 419.f)) == -3.32157380799e+38) {
    v_5 = 18446744073709549439ULL;
    v = (long)(! v_5);
  }
  else {
    v_7 = (long)(-(unsigned short)4156);
    v = v_7;
  }
  result = (unsigned long long)((long)(~ p[3][0][2]) / (- (- v) + 163L));
  return result;
}


