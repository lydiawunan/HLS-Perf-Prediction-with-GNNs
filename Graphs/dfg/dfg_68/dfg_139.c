#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93040768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned char p_5,
                  unsigned long p_9[1][2][5], float p_11,
                  unsigned long long p_13[2][4][5])
{
  unsigned short v_17;
  short v_15;
  unsigned int v_7;
  int v;
  unsigned char result;
  v_15 = (short)p_9[0][0][0];
  v = 1038198070;
  v_17 = (unsigned short)p_13[0][1][1];
  result = (unsigned char)(! ((174959467 + (int)(-3251125323.34 * (double)v_15)) + 
                              (int)v_17 * (669010380 >> (p_13[1][0][1] & 31ULL))));
  v_7 = (unsigned int)(- (- ((float)p_9[0][1][0] - p_11)) - (float)(! (
                                                                    (unsigned long long)result % (
                                                                    p_13[0][2][0] + 976ULL)) / (unsigned long long)(
                                                                    (unsigned long)v * (
                                                                    p_9[0][1][2] % (
                                                                    p_9[0][1][1] + 782UL)) + 318UL)));
  result = (unsigned char)((unsigned int)(~ (v * ((int)p * (int)p_5))) % (
                           v_7 + 628U));
  return result;
}


