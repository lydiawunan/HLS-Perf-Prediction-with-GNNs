#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 489077591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, int p_5, float p_7, unsigned int p_11,
                 double p_15)
{
  unsigned long v_19;
  char v_17;
  float v_13;
  unsigned short v_9;
  char v;
  unsigned int result;
  v_19 = 1368040UL;
  v_17 = (char)-12;
  if (0.f * - (- p_7) > (float)v_19) {
    v_9 = (unsigned short)(3036215040.f - (float)((p + 24828ULL) + (unsigned long long)(
                                                  (unsigned int)p_5 * p_11)));
    v_13 = (float)p_15;
  }
  else {
    v_13 = - ((float)(~ p_11) + (p_7 + (float)v_17));
    v_17 = (char)((float)(p_11 - 3400763561U) / (((float)p_11 + p_7) + 684.f));
    v_9 = (unsigned short)((float)(p / (unsigned long long)(p_11 + 966U) - (unsigned long long)p_15) + - (
                           (float)v_17 - p_7));
  }
  if (~ ((unsigned int)v_9 - p_11 / ((unsigned int)v_13 + 33U)) != 0U) {
    v = (char)p;
    result = (unsigned int)(39844L + (long)(32107 % ((int)(! v) + 22)));
  }
  else result = (unsigned int)(! (- p_5));
  return result;
}


