#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 266361082
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(void)
{
  char v_8;
  unsigned char v_6;
  unsigned long long v_4;
  unsigned short v;
  unsigned long long result;
  v_8 = (char)-7;
  v_6 = (unsigned char)(18446744073709551615ULL % ((unsigned long long)(- (
                                                   (float)v_8 * 2.55206486552e+37f)) + 31ULL) - 27835ULL);
  v_4 = (unsigned long long)v_6;
  v = (unsigned short)13601;
  result = (unsigned long long)v * ! v_4;
  return result;
}


