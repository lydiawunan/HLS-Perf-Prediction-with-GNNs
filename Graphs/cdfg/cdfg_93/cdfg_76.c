#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 564825792
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, double p_4, float p_9,
                  unsigned int p_13[2][3][5], double p_17[5][4])
{
  signed char v_21;
  short v_19;
  unsigned int v_15;
  long v_11;
  unsigned long long v_7;
  float v;
  unsigned char result;
  v_21 = (signed char)p;
  v_15 = 60771U;
  v_11 = (long)p_17[2][3];
  v_7 = 21959ULL;
  v = -8553366528.f;
  result = (unsigned char)p_13[1][0][0];
  if (20650 <= (int)((unsigned short)(((3.15070698742e+38 - p_17[2][1]) + (double)(
                                       (unsigned long long)result + 43857ULL)) + (double)(
                                      (unsigned long)(17 / ((int)v_21 + 787)) + (
                                      (unsigned long)v_15 - (unsigned long)v_11))))) {
    result = (unsigned char)(! (- v_7));
    v_11 = (long)(! p_13[1][1][4]);
    v = (float)((long)(- ((int)((unsigned short)p_9) % 31174)) | ((long)result - 
                                                                  v_11 % (
                                                                  (long)v + 677L)));
  }
  else {
    v_19 = (short)(! (- v_11));
    result = (unsigned char)(! (! (-837983570L + (long)v_19)));
    v_7 = (unsigned long long)(802311428. / ((double)result * ((double)v_15 + p_17[4][1]) + 64.));
  }
  if (v > (float)v_7) result = (unsigned char)(49270U + (unsigned int)p);
  else result = (unsigned char)(- p_4 + p_4);
  return result;
}


