#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 573115519
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, char p_9, float p_13, double p_15)
{
  unsigned char v_17;
  unsigned short v_11;
  unsigned short v_7;
  unsigned long long v_4;
  char v;
  float result;
  v_17 = (unsigned char)229;
  v_7 = (unsigned short)p;
  v_11 = (unsigned short)(p_15 * (double)v_17);
  v_4 = 18446744073709551496ULL;
  v = (char)(((double)(- v_4) / ((p - 0.) + 90.)) * (double)((float)(
                                                             (int)v_7 / -965536634 + (
                                                             (int)p_9 << (
                                                             (int)v_11 & 7))) + p_13));
  result = (float)(~ (- (! (107 / ((int)v + 488)))));
  return result;
}


