#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 971156563
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned long long p_5, float p_13,
                  unsigned int p_17, int p_19[5][2])
{
  unsigned char v_27;
  char v_25;
  float v_23;
  unsigned char v_21;
  unsigned long v_15;
  float v_11;
  unsigned short v_9;
  long v_7;
  unsigned int v;
  unsigned long result;
  v_27 = (unsigned char)161;
  v_25 = (char)p;
  v_23 = 7481677824.f;
  v_21 = (unsigned char)178;
  v_11 = (float)p_5;
  v_9 = (unsigned short)64746;
  v_7 = 10902087L;
  if (- p_5 - (unsigned long long)((double)p_19[0][1] * 915.175134679) % (
              (unsigned long long)v_7 * p_5 + 757ULL) <= ((unsigned long long)(
                                                          105U / (p_17 + 239U)) + (
                                                          2877ULL - p_5)) * (
                                                         47665ULL * (unsigned long long)(
                                                         -45391L / (long)(
                                                         (int)v_27 + 971)))) {
    v = (unsigned int)((unsigned long)(~ p_19[2][1] * ((int)v_21 | (int)((unsigned char)v_23))) / 4294908332UL);
    v_15 = (unsigned long)p_17;
    v_11 = (float)v_15;
  }
  else {
    v_7 = (long)v_25;
    v_9 = (unsigned short)v_7;
    v = 4294935779U;
  }
  if ((float)((unsigned long long)(- p) ^ (22454ULL / (p_5 + 632ULL)) / (unsigned long long)(
                                          (v_7 ^ (long)v_9) + 134L)) == 
      v_11 + p_13) result = (unsigned long)(! 37269U);
  else {
    v = v;
    v = (unsigned int)(25294UL % (unsigned long)(((v << 6ULL) + (unsigned int)(! p)) + 908U));
    result = (unsigned long)(! v);
  }
  return result;
}


