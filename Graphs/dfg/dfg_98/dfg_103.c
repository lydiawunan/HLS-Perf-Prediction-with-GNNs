#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 168491323
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, int p_5, unsigned long long p_11[4][3], int p_13,
          unsigned int p_19)
{
  float v_17;
  unsigned long v_15;
  long v_9;
  unsigned char v_7;
  unsigned short v;
  short result;
  v_15 = (unsigned long)p;
  v_9 = (long)p_13;
  result = (short)p_11[1][0];
  v_17 = (float)p_5;
  v_7 = (unsigned char)((unsigned long long)(((38 * (int)result) * (8 & p_13)) / 14727) * (
                        (unsigned long long)((long)((float)v_15 * v_17) - ! v_9) / (
                        (((unsigned long long)v_15 - p_11[3][0]) - (unsigned long long)p_19) + 400ULL)));
  v = (unsigned short)((unsigned long long)((int)(! (! v_7)) / ((int)result + 523)) - ~ (
                       (unsigned long long)(v_9 + (long)result) ^ (unsigned long long)p_5 * p_11[3][1]));
  result = (short)(((unsigned long)(! (- v)) / 3240434065UL) / (unsigned long)(
                   (((p - p) | (long)(~ p_5)) | ~ (254L % (p + 198L))) + 744L));
  return result;
}


