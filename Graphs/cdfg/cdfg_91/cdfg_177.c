#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 451210252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p)
{
  unsigned int v_14;
  short v_12;
  unsigned short v_10;
  signed char v_8;
  unsigned long v_6;
  int v_4;
  unsigned long v;
  signed char result;
  v_14 = (unsigned int)p;
  v_12 = (short)29809;
  v_10 = (unsigned short)p;
  v_8 = (signed char)p;
  v_6 = 50907UL;
  v_4 = -48271;
  v = 1010678616UL;
  result = (signed char)p;
  if (! (((unsigned long)result / (v + 511UL)) % 625103370UL) >= (unsigned long)p) {
    v_14 = (unsigned int)p;
    v_12 = (short)-53;
    v = (unsigned long)(! v_14) * (((unsigned long)p % (v_6 + 496UL)) * (unsigned long)(~ p));
  }
  else {
    v_6 = (0UL % (((unsigned long)p + 3566071827UL) + 177UL)) / ((24970UL / (unsigned long)(
                                                                  (int)v_10 + 1015)) * 9UL + 85UL);
    v_10 = (unsigned short)p;
    result = (signed char)(- ((-36 - (int)v_12) / ((int)v_10 * 62 + 392)));
  }
  while (v < (77UL - - v) + (unsigned long)(~ v_4)) {
    result = (float)v_6 * -568.729309082f;
    v_10 = (unsigned short)((unsigned long)(~ ((int)v_8 / ((int)v_10 + 314))) + 
                            (unsigned long)(~ v_14) * ((unsigned long)v_8 % (
                                                       v + 969UL)));
    v_4 = ! (~ v_4 / (((int)v_12 << 7) + 267));
    v_4 = v_4;
  }
  while_0_break: ;
  return result;
}


