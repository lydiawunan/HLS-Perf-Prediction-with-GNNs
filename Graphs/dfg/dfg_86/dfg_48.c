#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 182421144
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, unsigned char p_4[3][4][1], long long p_6,
          float p_9, unsigned long long p_13)
{
  char v_21;
  unsigned long v_19;
  float v_17;
  unsigned long long v_15;
  unsigned long v_11;
  signed char v;
  short result;
  v_21 = (char)74;
  v_19 = 392442445UL;
  v_17 = (float)p_13;
  v = (signed char)p_6;
  v_15 = (unsigned long long)((unsigned int)(- (0 % ((int)p_4[1][3][0] + 913))) % (
                              (unsigned int)((int)v / ((int)((signed char)(
                                                       (float)v - p_9)) + 889)) / (
                              - ((unsigned int)v * p) + 41U) + 223U));
  v_11 = (unsigned long)((p_13 % ((unsigned long long)(- ((float)v_15 * v_17)) + 52ULL)) * (unsigned long long)(
                         v_19 * (unsigned long)((int)(- v) + (int)v_21)));
  v = (signed char)v_11;
  result = (short)(- ((long long)(~ (p - (unsigned int)p_4[2][3][0])) & (
                      p_6 % (long long)((int)v + 538) + (long long)((float)p_4[1][2][0] * p_9))));
  return result;
}


