#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238125742
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p)
{
  unsigned int v_15;
  float v_13;
  unsigned long v_10;
  char v_8;
  unsigned long v_6;
  unsigned long v_4;
  long long v;
  unsigned char result;
  v_15 = 3607766146U;
  v_13 = (float)p;
  v_10 = (unsigned long)p;
  v_8 = (char)63;
  v_4 = 752271673UL;
  v = 826426815LL;
  v_6 = (unsigned long)(29376ULL % (unsigned long long)((v_4 / 28UL & (
                                                         v_10 - (unsigned long)v_15)) * (unsigned long)(
                                                        (114118470 << (
                                                         (int)p & 31)) % (
                                                        ((int)v_8 + (int)p) + 817)) + 17UL));
  v_10 = (unsigned long)(((float)(! p) + v_13 / ((float)v_15 + 259.f)) - (float)(
                         (long long)p * -86LL ^ (v + (long long)p))) * (
         (unsigned long)p / ((13045UL * v_10 - 27UL) + 48UL));
  v = (long long)v_8;
  result = (unsigned char)(-63217LL ^ ~ (v - (long long)v_4) * (long long)(
                                      (v_6 & (unsigned long)v_8) - (v_10 - (unsigned long)p)));
  return result;
}


