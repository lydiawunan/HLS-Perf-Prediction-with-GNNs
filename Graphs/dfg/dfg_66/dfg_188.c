#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1070131536
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, short p_4, float p_6, signed char p_9)
{
  int v_17;
  int v_15;
  unsigned short v_13;
  short v_11;
  signed char v;
  float result;
  v_17 = 55831;
  v_15 = 106945696;
  v_11 = p_4;
  v = (signed char)p;
  result = p_6;
  result = (float)(~ ((int)p_4 - (int)((short)((float)v_17 + (result - (float)v)))));
  v_13 = (unsigned short)(872 - (-24 / (v_15 + 284)) % 1);
  v = (signed char)((int)result % (~ (((int)v_11 * (int)v_13) * (int)(
                                      (float)v_11 - 805.526611328f)) + 961));
  result = (float)((int)(- (- (~ p))) / (((int)(~ p_4) % ((int)((short)(
                                                          p_6 + result)) + 98)) * (
                                         76 * (int)v + (int)p_9) + 78));
  return result;
}


