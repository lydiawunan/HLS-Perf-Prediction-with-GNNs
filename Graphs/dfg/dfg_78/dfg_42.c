#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 731779096
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned short p_4, unsigned int p_6,
         signed char p_9, unsigned char p_11[2][5])
{
  unsigned long long v_21;
  long long v_19;
  int v_17;
  unsigned short v_15;
  float v_13;
  int v;
  char result;
  v_21 = 18446744073666956811ULL;
  v_19 = 22393LL;
  v_17 = -55342;
  v_13 = (float)((unsigned long long)(((unsigned long)p_4 + 3759524485UL) / (unsigned long)(
                                      (int)p_9 + 40)) + (unsigned long long)(
                                                        - v_19 & (long long)p_6) / (
                                                        0ULL / ((v_21 - 18446744073709536374ULL) + 771ULL) + 985ULL));
  v_15 = (unsigned short)(~ (((int)(- p_11[1][3]) | -40 % (v_17 + 493)) * (int)p_4));
  v = (((int)(~ p_9) + (int)(- p_11[0][1])) + ((int)(20234988.f * v_13) & 26892)) | (int)v_15;
  result = (char)(- ((float)((int)p + -3) + 2.52138239687e+38f) / ((float)(
                                                                   439735660ULL ^ (unsigned long long)(
                                                                   (unsigned int)(
                                                                   (int)p_4 + (int)((unsigned short)2.73706838013e+38f)) / (
                                                                   p_6 * (unsigned int)v + 220U))) + 488.f));
  return result;
}


