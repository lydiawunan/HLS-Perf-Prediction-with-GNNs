#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 118442234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, int p_4, unsigned long p_6, long p_11,
          unsigned char p_17[4][3][4])
{
  signed char v_19;
  signed char v_15;
  signed char v_13;
  double v_9;
  double v;
  float result;
  v_19 = (signed char)-27;
  v_13 = (signed char)38;
  v_9 = (double)p_17[2][0][3];
  v = -1819216970.02;
  v_15 = (signed char)((- (~ p_6) + 194UL) - (unsigned long)((int)((signed char)v) / (
                                                             (int)v_19 + 629)));
  v = (double)(unsigned short)21473;
  v_9 = (double)((~ ((int)((signed char)v_9) + (int)v_15) >> ((unsigned long)(
                                                              (long)p_17[3][0][3] - p_11) % (
                                                              (4294940175UL | p_6) + 684UL) & 31UL)) - 17159708);
  result = (float)((0. * (- p * p)) * (double)((long)(p_4 * (int)((double)p_6 - v)) | 
                                               (long)(- v_9) / (p_11 % (long)(
                                                                (int)v_13 + 601) + 693L)));
  return result;
}


