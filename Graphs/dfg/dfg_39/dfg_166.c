#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 832274268
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p[1][4], unsigned short p_9[5][4], short p_11)
{
  signed char v_21;
  unsigned char v_19;
  signed char v_17;
  unsigned long v_15;
  char v_13;
  float v_6;
  float v_4;
  char v;
  float result;
  v_21 = (signed char)p_9[2][2];
  v_19 = (unsigned char)192;
  v_17 = (signed char)p[0][3];
  v_15 = 3718158225UL;
  v_13 = (char)p[0][3];
  v_6 = 9153341440.f;
  v_4 = (- (v_6 + -423882880.f) / ((float)p_9[4][2] + 553.f)) / ((float)(
                                                                 ((unsigned long)(
                                                                  (int)p[0][0] % (
                                                                  (int)p_11 + 627)) - (
                                                                  (unsigned long)v_13 + v_15)) | (unsigned long)(
                                                                 (int)(! v_17) * (
                                                                 (int)v_19 * (int)v_21))) + 140.f);
  v_6 = (float)(~ ((int)p[0][2] - 18967));
  v = (char)(v_4 * (float)(((int)(- v_6) << (-2100 * (int)p[0][3] & 31)) + (int)p_9[2][3]));
  result = (float)((int)v % 598857304);
  return result;
}


