#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 911962842
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned short p_5)
{
  float v_15;
  unsigned int v_13;
  float v_11;
  unsigned char v_9;
  char v_7;
  short v;
  unsigned char result;
  v_15 = -5588009984.f;
  v_13 = 3420624338U;
  v_11 = (float)p_5;
  v_7 = (char)p;
  v = (short)p_5;
  result = (unsigned char)82;
  v_9 = (unsigned char)((((long long)(4138 - (int)((short)-3.18357267368e+37)) / 563846809LL) % (long long)(
                         (19500UL - (unsigned long)((int)p % ((int)p + 679))) + 627UL)) / (long long)(
                        ((int)((short)(- ((float)v_7 * v_11))) - (int)v) + 750));
  v_7 = (char)((unsigned int)v_7 * ! ((unsigned int)v_15 / (v_13 / (unsigned int)(
                                                            (int)p_5 + 259) + 581U)));
  v_13 = - ((781228065U / (v_13 + 104U) | (unsigned int)((int)p_5 ^ (int)v_7)) * (unsigned int)(~ (~ p_5)));
  result = (unsigned char)((unsigned int)(((int)v / ((int)p + 652) - (int)(! p_5)) & (
                                          (int)p / ((int)result + 557) + (int)(- v_7))) / (
                           ((unsigned int)((int)v_9 / ((int)((unsigned char)v_11) + 208)) * v_13) * (unsigned int)v_15 + 860U));
  return result;
}


