#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 482256353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[5][5][4], float p_5, unsigned short p_9,
                  unsigned short p_11, double p_13)
{
  signed char v_17;
  double v_15;
  long v_7;
  unsigned long long v;
  unsigned long result;
  v_17 = (signed char)p_13;
  v_15 = 7543940275.9;
  v_7 = 19929L;
  v = (unsigned long long)p_13;
  result = (unsigned long)((unsigned long long)(~ p_9) + (v + (unsigned long long)(
                                                          (unsigned int)v_17 / 3868453699U)) / 18446744072627035389ULL);
  v = (unsigned long long)(- p_5 - (float)((unsigned long)(((double)p_11 + p_13) - - v_15) ^ result));
  v = (unsigned long long)((long)((int)(-845.556884766f + (p_5 + (float)v)) - (
                                  (int)((unsigned short)(p_5 / ((float)v_7 + 146.f))) + (int)p_9)));
  result = (unsigned long)(- ((unsigned long long)(~ ((int)p[1][2][2] & (int)p[3][3][2])) + - (
                              v - (unsigned long long)p[3][2][0])));
  return result;
}


