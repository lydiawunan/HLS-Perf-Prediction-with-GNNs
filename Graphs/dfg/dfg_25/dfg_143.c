#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557607605
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, char p_11, unsigned short p_15)
{
  unsigned int v_17;
  unsigned short v_13;
  short v_9;
  double v_7;
  short v_5;
  signed char v;
  float result;
  v_17 = 3662277008U;
  v_13 = (unsigned short)25411;
  v_5 = (short)-13758;
  v_7 = (double)((unsigned long)v_17 * (unsigned long)(- ((long)(! p_15) + 5745L)));
  v_9 = (short)(~ (1031196270L / (long)((int)v_13 + 791)) - (long)((int)((unsigned short)(
                                                                   (double)v_13 / 2639568575.69)) % 24674));
  v = (signed char)(((3293301781U - (unsigned int)((int)((short)v_7) + (int)v_9)) - (
                     47531U & (unsigned int)p)) * (unsigned int)(! (~ p_11)));
  result = (float)(~ (! ((int)p * (int)v - ((int)v_5 + (int)p))));
  return result;
}


