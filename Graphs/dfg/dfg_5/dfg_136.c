//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 397573253
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, unsigned short p_11, float p_13)
{
  double v_15;
  float v_9;
  short v_7;
  short v_5;
  unsigned int v;
  float result;
  v_9 = 1.3843110652e+38f;
  v_7 = (short)-13501;
  v = (unsigned int)p_11;
  v_15 = (double)-675068120;
  v_5 = (short)(- ((double)((float)((int)v_7 % -12448) - p_13 / ((float)p_11 + 928.f)) * v_15));
  result = (float)p_11;
  result = (float)(((p - p / ((double)v + 739.)) + (double)(((int)((short)result) - 9305) / (
                                                            (int)v_5 / (
                                                            (int)v_7 + 675) + 964))) * (double)(
                   -3.13270395788e+38f + v_9));
  return result;
}


