#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394240710
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, double p_7, double p_11, unsigned char p_19,
                  float p_21)
{
  unsigned int v_25;
  int v_23;
  short v_17;
  unsigned short v_15;
  long long v_13;
  unsigned long v_9;
  float v_5;
  float v;
  unsigned long result;
  v_25 = (unsigned int)p_7;
  v_23 = (int)p_7;
  v_17 = (short)p_11;
  v_15 = (unsigned short)42273;
  v_5 = -4766571008.f;
  v = (float)p_19;
  if (p_11 / (double)((- v - 214.f) + 519.f) >= 0.) {
    v_9 = (unsigned long)((int)v_17 ^ - (111 + (int)p_19));
    v_13 = (long long)(59015UL & (unsigned long)((int)v_15 * (int)((unsigned short)(
                                                 (double)v + 736.947901499))));
    v_5 = (float)((double)(55510.f * (v_5 / ((float)v_15 + 702.f))) * (
                  (49. + p_11) / ((double)(- v_9) + 180.)));
  }
  else {
    v_17 = (short)((int)(- p_21 * 2.86498000477e+38f) * -6106);
    v_9 = (unsigned long)(- p_7 * (double)((unsigned int)(~ v_17) & (unsigned int)v_23 % (
                                                                    v_25 + 961U)));
    v_13 = (long long)p_21;
  }
  if (4294967235UL > 3333704426UL + v_9) result = (unsigned long)((int)p - (int)((char)3.29260644384e+38));
  else {
    v_9 = (unsigned long)(20023. + ((double)v_13 + p_7) * ((double)v - p_11));
    v = (float)(((double)((float)p / (v_5 + 982.f)) * - p_7) * ((double)(
                                                                v_9 / (unsigned long)(
                                                                (int)p + 155)) / (
                                                                (p_11 + -45.) + 247.)));
    result = (unsigned long)v;
  }
  return result;
}


