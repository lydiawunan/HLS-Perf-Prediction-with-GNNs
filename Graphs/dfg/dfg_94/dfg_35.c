#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 27435775
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned short p_15, unsigned int p_17)
{
  short v_12;
  float v_10;
  double v_8;
  unsigned int v_6;
  signed char v_4;
  unsigned short v;
  unsigned long long result;
  v_12 = (short)-21449;
  v_10 = -524.165588379f;
  v_6 = 17776U;
  v_8 = (double)((unsigned int)(((int)p & (int)(~ p_15)) % -6) & - (- p_17));
  v = (unsigned short)p;
  v_4 = (signed char)((unsigned long)(((long)v_10 / ((long)v_12 * -6862L + 190L)) % (long)(
                                      ~ ((int)p - (int)((signed char)8438839459.4)) + 367)) / 130142001UL);
  result = - ((unsigned long long)((unsigned int)v + 11708U) * (6154ULL / (unsigned long long)(
                                                                (int)v_4 + 388))) * (unsigned long long)(- (
           (-18029LL + (long long)v_6) & (long long)(v_8 + 9443269632.)));
  return result;
}


