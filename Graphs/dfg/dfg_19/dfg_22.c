#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820436338
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, double p_9)
{
  float v_11;
  unsigned long v_6;
  unsigned long v_4;
  unsigned short v;
  short result;
  v_11 = (float)p_9;
  v_6 = 38375UL;
  v_4 = (unsigned long)p;
  result = (short)((p - 1.) + p_9 / (((p + 20211.) - (p_9 - 21405.)) + 71.));
  v_6 = (unsigned long)(-5274. / ((double)v_6 * ((double)(v_11 / -2.88500665318e+38f) * (
                                                 (double)result * p)) + 20.));
  v = (unsigned short)(((v_4 * (unsigned long)result) / ((231UL + v_6) + 651UL)) * (
                       (unsigned long)(~ result) + (unsigned long)p / (
                                                   v_4 + 686UL)) << (
                       (unsigned long)(- (- (- p_9))) & 31UL));
  result = (short)(! v);
  return result;
}


