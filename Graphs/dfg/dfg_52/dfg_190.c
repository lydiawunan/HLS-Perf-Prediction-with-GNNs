#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 288651616
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, int p_7, unsigned char p_9,
                  unsigned long long p_11, unsigned long p_13)
{
  unsigned int v_17;
  short v_15;
  unsigned long v_4;
  char v;
  unsigned char result;
  v_17 = 3322235824U;
  v_15 = (short)p_13;
  v_4 = 4213752358UL;
  result = (unsigned char)253;
  v_4 = (unsigned long)(- (((unsigned long long)(3897213391UL * v_4) * (
                            p_11 * (unsigned long long)p_13)) / (unsigned long long)(
                           (unsigned int)(p_7 - (int)v_15) * - v_17 + 569U)));
  v = (char)(! p_9);
  v = (char)(p_7 % ((-889333609 - - ((int)result / ((int)v + 696))) + 595));
  result = (unsigned char)(((unsigned long)(17555 % ((int)v + 912)) * (
                            (unsigned long)v + v_4) - (unsigned long)(! p) * (unsigned long)(
                                                      41769075U >> ((unsigned int)2.34145541958e+38 & 31U))) - (unsigned long)v);
  return result;
}


