#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188951738
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[4][5][1], unsigned short p_7,
                 unsigned long long p_9[2][1][4], char p_19)
{
  float v_17;
  unsigned short v_15;
  short v_13;
  long v_11;
  double v_4;
  unsigned long v;
  unsigned int result;
  v_17 = 3.91075635715e+37f;
  v_15 = (unsigned short)p_19;
  v_13 = (short)-9684;
  v_11 = 815682663L;
  result = (unsigned int)p_9[1][0][1];
  v_4 = (double)((float)((522055164ULL % (unsigned long long)((int)p_7 + 633)) * (unsigned long long)(- v_11) - (unsigned long long)(! (
                         (int)v_13 + -94))) + ((float)((unsigned long)result % 4214344981UL) + 
                                               (float)((unsigned long)v_15 + 3677293435UL) * (
                                               v_17 - (float)p_19)));
  result = (unsigned int)(- ((unsigned long long)(((float)p[1][3][0] - 282.687103271f) * 0.f) << (
                             (unsigned long long)(-2633L | (long)-2.19682023603e+38f) / (
                             (unsigned long long)result * p_9[1][0][3] + 1008ULL) & 63ULL)));
  v = (unsigned long)(((double)result + - (9104128000. / (v_4 + 874.))) / (
                      (double)((int)(- (- p[1][1][0])) + (int)(- (! p_7))) + 818.));
  result = (unsigned int)(1.02328944768e+38f / ((float)((unsigned long)(
                                                        717337909U % (
                                                        (result | (unsigned int)-2.32840240815e+38) + 903U)) % (
                                                        ((unsigned long)(- result) + 
                                                         4294944461UL % (
                                                         v + 781UL)) + 540UL)) + 888.f));
  return result;
}


