#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 971345637
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned short p_13)
{
  short v_11;
  float v_9;
  unsigned long long v_6;
  unsigned char v_4;
  signed char v;
  float result;
  v_11 = (short)12823;
  v = (signed char)p;
  v_6 = (unsigned long long)p_13;
  v_4 = (unsigned char)(~ ((int)v_11 / -1205));
  v_9 = (float)p;
  result = (float)((int)v) * ((float)((unsigned long long)v_4 * v_6 - (unsigned long long)(
                                      (int)p + 30490)) / (- v_9 * 2.41222145426e+38f + 406.f));
  return result;
}


