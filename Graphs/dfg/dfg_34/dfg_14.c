#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 613059228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, unsigned short p_13, double p_15, short p_17,
                  long p_19)
{
  unsigned short v_11;
  float v_9;
  double v_6;
  unsigned short v_4;
  unsigned long v;
  unsigned char result;
  v_9 = 160.214050293f;
  v_6 = (double)p_17;
  result = (unsigned char)p_13;
  v_11 = (unsigned short)((long)(((int)p_13 * (int)(! p_17)) / -2854) + - (~ (
                          p_19 % (long)((int)p_13 + 801))));
  v_4 = (unsigned short)(- (((double)((int)p_13 * (int)result) - - p_15) - (double)p_13));
  v = (unsigned long)(v_6 / (((double)p + ((double)v_9 / (v_6 + 395.)) / (
                                          (double)v_11 + 566.)) + 498.));
  result = (unsigned char)(40478UL + (- v % (unsigned long)((int)v_4 + 920)) / 314UL);
  return result;
}


