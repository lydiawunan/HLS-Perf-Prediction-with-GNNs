#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188692542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p, unsigned short p_13)
{
  short v_15;
  float v_10;
  signed char v_8;
  signed char v_6;
  signed char v_4;
  short v;
  unsigned long result;
  v_15 = (short)-18815;
  v_10 = 4134859008.f;
  v_6 = (signed char)-42;
  v_4 = (signed char)p;
  v_8 = (signed char)(~ ((long)((int)p + (int)p_13) & 1970475520L) + (long)(
                      (79 / ((int)((unsigned char)(v_10 + -323149408.f)) + 911)) * (
                      ((int)p_13 - (int)v_15) % ((int)(! p_13) + 924))));
  v_10 = (float)(unsigned short)40148;
  v = (short)((float)((((int)v_6 & 19885) * -20894) % ((int)v_8 / 71 + 564)) * v_10);
  result = (unsigned long)(- ((int)v & (int)(- (- v_4))));
  return result;
}


