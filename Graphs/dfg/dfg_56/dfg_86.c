#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 539247798
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p)
{
  short v_7;
  unsigned long v_5;
  short v;
  signed char result;
  v = (short)2623;
  v_5 = -26289UL;
  v_7 = (short)v_5;
  result = (signed char)-116;
  result = (signed char)(((unsigned long)v * ((unsigned long)(! result) / (
                                              (unsigned long)p % (v_5 + 165UL) + 74UL))) / (unsigned long)(
                         ((unsigned int)result - ((unsigned int)((int)v_7 | (int)((short)-1.07961978387e+38f)) | 508267098U)) + 505U));
  return result;
}


