#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 564559678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p[2][1][3], unsigned short p_5, unsigned long p_11,
          unsigned char p_15)
{
  long long v_19;
  unsigned int v_17;
  short v_13;
  unsigned int v_9;
  signed char v_7;
  unsigned char v;
  float result;
  v_19 = 51250LL;
  v_17 = p[0][0][1];
  v_13 = (short)p_15;
  if ((long long)((int)-2.58247765982e+38 - ((int)(~ v_13) + (int)p_15)) <= 
      (long long)v_17 / (v_19 + 408LL)) v = (unsigned char)p[0][0][0];
  else {
    v_9 = (unsigned int)p_11;
    v_7 = (signed char)(! (- (~ v_9)));
    v = (unsigned char)((int)p_5 + (int)v_7);
  }
  result = (float)(! ((unsigned int)((int)v * 137) - (90U + p[1][0][0])));
  return result;
}


