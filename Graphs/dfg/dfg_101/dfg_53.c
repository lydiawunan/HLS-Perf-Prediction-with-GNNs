#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294510328
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, char p_11)
{
  int v_19;
  unsigned short v_17;
  char v_15;
  unsigned long long v_13;
  unsigned long v_8;
  unsigned int v_6;
  double v_4;
  unsigned short v;
  unsigned int result;
  v_19 = -46810;
  v_17 = (unsigned short)45283;
  v_15 = (char)-47;
  v_13 = 262562985ULL;
  v_8 = 3958130109UL;
  v = (unsigned short)6811;
  v_8 = (unsigned long)(v_13 - (unsigned long long)(v_8 * (unsigned long)(
                                                    (int)v_15 * (int)v_17 | - v_19)));
  v_4 = (double)(~ (- -16LL));
  v_6 = (unsigned int)((int)(! p) + (int)p_11);
  result = (unsigned int)(- ((((double)v / (v_4 + 590.)) * (double)v_6) / (
                             (double)(! v_8 | (unsigned long)p) + 174.)));
  return result;
}


