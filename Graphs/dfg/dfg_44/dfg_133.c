#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 430515468
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long long p_4, unsigned int p_6,
                   unsigned int p_8)
{
  int v_19;
  char v_17;
  unsigned int v_15;
  double v_13;
  unsigned char v_11;
  short v;
  unsigned short result;
  v_17 = (char)p_4;
  v_15 = 3398849285U;
  v = (short)p_8;
  result = (unsigned short)26819;
  v_19 = (int)p_8;
  v_13 = (double)((- ((unsigned int)result + v_15) | (unsigned int)(- (
                   -123 | (int)v_17))) + (unsigned int)v_19);
  v_11 = (unsigned char)(749990531. + - v_13);
  result = (unsigned short)((unsigned long long)(((long long)(~ p) - (
                                                  p_4 >> 20)) / (long long)(
                                                 (p_6 | p_6) * 4294967271U + 650U)) - (
                            (unsigned long long)(- (p_8 / 39U)) + (((unsigned long long)p - 39834568ULL) & (unsigned long long)(
                                                                   (int)v - (int)v_11))));
  return result;
}


