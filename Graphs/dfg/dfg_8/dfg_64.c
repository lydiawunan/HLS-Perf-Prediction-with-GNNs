//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 41088779
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p)
{
  int v_15;
  unsigned short v_13;
  double v_11;
  float v_8;
  short v_6;
  unsigned long long v_4;
  float v;
  unsigned short result;
  v_15 = 57667;
  v_13 = (unsigned short)42614;
  v_6 = (short)p;
  v = (float)p;
  v_8 = (float)(p * ! (71LL - - p));
  v_11 = (double)(! (! (! v_15) - -7));
  v_4 = (unsigned long long)v_13;
  result = (unsigned short)((double)(((int)((signed char)(6.f - v)) - 125) / (
                                     (int)((float)(v_4 + (unsigned long long)v_6) - v_8) + 520)) / (
                            (double)(! (! p)) * v_11 + 886.));
  return result;
}


