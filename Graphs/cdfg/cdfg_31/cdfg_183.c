#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 596539388
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, double p_11, unsigned short p_13,
          unsigned long long p_15, double p_19)
{
  char v_25;
  long v_23;
  unsigned long v_21;
  char v_17;
  unsigned short v_9;
  signed char v_6;
  float v_4;
  char v;
  float result;
  v_25 = (char)p;
  v_23 = (long)p_13;
  v_21 = 3266259486UL;
  v_9 = (unsigned short)p_15;
  v_4 = (float)p_15;
  v = (char)p_11;
  result = 586.632446289f;
  while ((float)(((int)(result - (float)v_23) % (((int)v ^ 76) + 864)) * (
                 (int)((unsigned short)(p_11 * (double)v)) + (int)p_13)) >= 
         - (v_4 / (result + 201.f)) / ((float)(p_15 * (unsigned long long)(
                                               v_21 + (unsigned long)v_9)) + 647.f)) {
    result = (unsigned long)v_25 - 24809UL;
    v_25 = (char)(! 3252U);
    v_9 = (unsigned short)((double)((v_23 % 49599L) / ((long)((double)v_23 + p_11) + 125L)) / (
                           - p + 337.));
    v = (char)(- ((float)(-98 - (int)p_13) + v_4));
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)p_19 & v_21) % ((p_15 / ((unsigned long long)p_11 + 179ULL)) * 18446744073709492705ULL + 601ULL) < (unsigned long long)v) {
    v_4 = (float)((double)((float)v_9 - v_4) / (31476. / (p_11 + 729.) + 620.) + (double)p_13);
    v_6 = (signed char)(- (char)-107);
    result = (float)((60827U / (unsigned int)((int)v + 915) + (unsigned int)(
                      (int)((signed char)v_4) & (int)v_6)) + (unsigned int)(
                     (int)(- p) - -13));
  }
  else {
    v_17 = ~ v;
    v_9 = (unsigned short)((double)(result + 0.f) * p_11);
    result = (float)(((long)(v_4 - (float)p_15) * (861084411L * (long)v_17)) * (long)(
                     (int)(- p_13) - (int)v_9 / ((int)((unsigned short)p_19) + 392)));
  }
  return result;
}


