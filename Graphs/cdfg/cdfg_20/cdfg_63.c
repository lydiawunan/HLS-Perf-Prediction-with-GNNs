#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 27361935
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned char p_11, double p_13)
{
  short v_9;
  float v_7;
  unsigned long v_4;
  signed char v;
  signed char result;
  v_9 = (short)-26843;
  v_7 = (float)p_13;
  v = (signed char)p;
  v_4 = (unsigned long)(! (((int)v_9 / ((int)p_11 + 146)) / (551787386 / (
                                                             (int)p_13 + 495) + 348)));
  result = (signed char)((unsigned long long)((unsigned long)v + v_4) * (
                         18446744073709496159ULL - (unsigned long long)p) - (unsigned long long)(
                         -15447 % ((int)((short)(- v_7)) + 353)));
  return result;
}


