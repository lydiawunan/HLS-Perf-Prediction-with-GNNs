#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114195977
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, float p_7[3][1][2], short p_9, double p_13,
                   float p_17[3][5])
{
  long v_19;
  char v_15;
  long v_11;
  long v_5;
  char v;
  unsigned short result;
  v_19 = (long)p_13;
  v_11 = 552645504L;
  v_5 = -278326785L;
  v_15 = (char)v_19;
  v = (char)((((float)v_5 - (p_7[2][0][0] + 1.84467440737e+19f)) / ((float)(
                                                                    4030606075U - (unsigned int)(! p_9)) + 649.f)) / (
             (float)((v_11 - (long)p_13) * (long)(102 - (int)v_15)) / (
             (p_17[2][0] + - p_17[1][1]) + 886.f) + 972.f));
  result = (unsigned short)((int)p % ((int)v + 245));
  result = result;
  return result;
}


