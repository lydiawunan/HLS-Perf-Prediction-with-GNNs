#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82916432
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, signed char p_7, long long p_9, long long p_13[1],
                  unsigned char p_17)
{
  long v_21;
  unsigned char v_19;
  int v_15;
  long long v_11;
  long v_4;
  unsigned short v;
  unsigned long result;
  v_21 = 1032170990L;
  v_19 = (unsigned char)p_7;
  v_15 = (int)p_7;
  v_11 = 60373LL;
  v_4 = -195L;
  v = (unsigned short)p_17;
  if (v_15 < 227) {
    v_11 = (long long)(v_21 * -21L);
    v_15 = (int)p_7;
    v_21 = (long)((p_13[0] / -449567543LL + 83LL) / (long long)((int)v + 74));
  }
  else {
    v_11 = v_11;
    v_21 = (long)(((int)v_19 & (int)p) % ((int)(- ((float)v_11 - -7.05295390249e+37f)) + 515));
    v_19 = (unsigned char)(((int)p_7 + (int)(! p_7)) / ((int)(- (~ p_7)) + 147));
  }
  if ((long)(- (v_15 / ((int)p_17 + 1018)) / ((int)v_19 + 90)) != v_21) {
    result = (unsigned long)(25259 + (int)((unsigned short)((double)(
                                                            285340885L - v_4) * -6396740440.9)));
    v = (unsigned short)(((double)(p_9 & v_11) * 2.81980168364e+38) * (double)(~ (
                         (long long)result + p_13[0])));
    result = ((unsigned long)(3419091488U | (unsigned int)v) * (unsigned long)(
              v_4 - (long)p)) / (unsigned long)(((long)((int)p_7 * (int)p_7) + 
                                                 v_4 / (long)((int)p_7 + 253)) + 976L);
  }
  else result = 59568UL;
  return result;
}


