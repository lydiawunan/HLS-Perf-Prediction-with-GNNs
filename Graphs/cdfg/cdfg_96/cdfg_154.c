#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1060734752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p[5][3], unsigned int p_11, int p_15[5][2])
{
  long v_17;
  unsigned short v_13;
  double v_8;
  short v_6;
  signed char v_4;
  char v;
  unsigned char result;
  v_17 = 470797033L;
  v_13 = (unsigned short)p_15[2][0];
  v_8 = 1.39293145235e+38;
  v_6 = (short)p_11;
  v_4 = (signed char)p[4][1];
  v = (char)p_15[4][1];
  result = (unsigned char)p[4][2];
  result = (unsigned char)(((unsigned int)p[4][2] & ~ p_11) - (unsigned int)(
                           (int)(- result) % 10294));
  while ((unsigned int)(! (~ ((int)v - (int)v_4))) != (unsigned int)(
                                                      ((int)v_6 / 47306) * (int)result) / (
                                                      (unsigned int)(
                                                      (int)((char)v_8) - (int)p[2][0]) * (
                                                      p_11 / 62U) + 167U)) {
    v = (long)v_13 * -26328L;
    v_4 = (signed char)((unsigned long)((long)v + v_17 % 17384L) ^ 718192311UL);
    result = (unsigned char)p_15[4][1];
    v_8 = (double)((p_11 * (unsigned int)v_8 + (unsigned int)((int)v_4 & 48)) + (unsigned int)(
                   (int)(! result) % (((int)((short)-2788937984.f) + (int)v_6) + 412)));
  }
  while_0_break: ;
  return result;
}


