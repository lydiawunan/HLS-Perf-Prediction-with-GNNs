#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839196503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, unsigned long p_4, double p_6, char p_9,
          unsigned long long p_17)
{
  float v_25;
  double v_23;
  int v_21;
  unsigned int v_19;
  unsigned long v_15;
  unsigned char v_13;
  unsigned short v_11;
  int v;
  float result;
  v_25 = (float)p_17;
  v_23 = (double)p_4;
  v_21 = (int)p_17;
  v_19 = (unsigned int)p_4;
  v_15 = (unsigned long)p_17;
  v_13 = (unsigned char)p_9;
  v_11 = (unsigned short)p_9;
  v = (int)p_9;
  result = (float)p_9;
  while ((int)((char)(- ((double)(88UL / (p_4 + 886UL)) - ((double)v_21 + v_23)))) > (int)p_9) {
    v_13 = (unsigned char)((unsigned long)(~ ((int)p_9 + (int)p_9)) * (
                           ! v_15 / (unsigned long)(v_21 / ((int)p_9 + 68) + 589)));
    v_13 = (unsigned char)((unsigned long)((p % 108L) / (long)(51694 / (
                                                               (int)v_13 + 681) + 703)) + (unsigned long)v_19);
    v_23 = (double)(- ((int)v_11 / ((int)((unsigned short)v_25) + 591)) * (int)v_13);
  }
  while_0_break: ;
  while ((unsigned long)p == p_4 % 3904254408UL + (unsigned long)(((double)result / (
                                                                   p_6 + 149.)) / (
                                                                  (double)(
                                                                  v / (
                                                                  (int)p_9 + 769)) + 3.))) {
    v_13 = (int)v_13 * ((int)v_11 * 59);
    v_21 = (int)((unsigned long long)((v_19 / ((unsigned int)result + 202U)) * (unsigned int)(- v_23)) / (
                 ! p_17 * (unsigned long long)(- v_15) + 359ULL));
    v_11 = (unsigned short)(- (p_17 + (unsigned long long)v_19) + (unsigned long long)(
                            -97083939LL - (long long)(- v_21)));
    v = (int)((float)(- v_15) * ((float)p_9 / (result / 145337648.f + 179.f)));
  }
  while_0_break_0: ;
  return result;
}


