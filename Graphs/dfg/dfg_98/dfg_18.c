#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 431944322
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned short p_7, short p_13[2][3], char p_17,
          double p_19)
{
  float v_23;
  float v_21;
  unsigned long v_15;
  float v_11;
  signed char v_9;
  int v_5;
  long v;
  short result;
  v_23 = (float)p_19;
  v_21 = (float)p;
  v_15 = 27705UL;
  v_11 = 5337581568.f;
  v_9 = (signed char)p;
  v = -37706L;
  result = (short)p_17;
  v_15 = (unsigned long)((- ((int)p + (int)((unsigned char)v_21)) >> (
                          (int)-7.8865509187e+37 & 31)) + ((int)(p_19 * (double)v_15) - 
                                                           (int)result * (int)result) / (
                                                          (int)(- (- v_23)) + 475));
  v_5 = (int)(((unsigned long)(((int)p + (int)v_9) * ((int)((short)v_11) - (int)p_13[1][0])) | (
               (v_15 ^ (unsigned long)p_17) + v_15 * (unsigned long)p_19)) ^ (unsigned long)p);
  result = (short)(~ (213746688 * (int)(- p)) % ((int)p_7 + 660));
  result = (short)(-828121707LL * (long long)result >> (v_5 & 63));
  return result;
}


