#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1049722242
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p)
{
  unsigned long long v_12;
  unsigned char v_10;
  float v_8;
  unsigned long long v_6;
  unsigned short v_4;
  unsigned short v;
  float result;
  v_12 = (unsigned long long)p;
  v_4 = p;
  v = p;
  result = (float)p;
  v_8 = (float)(-(unsigned char)104);
  while ((int)(~ v) != 1460) {
    v_6 = v_8 / ((float)((int)v_4 / 18903) + 413.f);
    v_10 = (unsigned char)v_6;
    v_8 = (float)(v_12 + (unsigned long long)(! ((int)p + (int)v)));
    v = (unsigned short)((unsigned long long)(-22161 * (int)((short)(
                                              result + (float)v_10))) * (
                         (unsigned long long)v_8 * (v_6 * (unsigned long long)result)));
  }
  while_0_break: ;
  return result;
}


