#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 997957808
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, signed char p_9, double p_11)
{
  int v_13;
  unsigned char v_6;
  unsigned long v_4;
  char v;
  unsigned int result;
  v_13 = (int)p_11;
  v_6 = (unsigned char)241;
  v_4 = 3589444278UL;
  result = 4294943828U;
  v_4 = ~ ((unsigned long)(1057885471. + - p_11) * ((unsigned long)result % (
                                                    v_4 + 278UL) - (unsigned long)(- v_13)));
  v = (char)((3993882681U - (unsigned int)((int)p_9 * (int)((signed char)-2.88544597018e+38f))) ^ (unsigned int)(~ v_6));
  v = (char)(- (! ((unsigned long)v % (v_4 + 455UL)) >> ((unsigned long)(
                                                         -966.30645752f / (
                                                         (float)v_6 + 221.f) + (float)(
                                                         (int)p + (int)p_9)) & 31UL)));
  result = (unsigned int)v;
  return result;
}


