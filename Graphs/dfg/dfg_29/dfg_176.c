#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105535209
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned short p_11)
{
  unsigned short v_15;
  short v_13;
  signed char v_9;
  unsigned short v_7;
  short v_5;
  float v;
  double result;
  v_15 = (unsigned short)p;
  v_13 = (short)-21180;
  v_9 = (signed char)p_11;
  v_5 = (short)-4700;
  v_7 = (unsigned short)(! (((int)p_11 % ((int)v_13 + 791) | (int)v_5 % (
                                                             (int)v_15 + 854)) / (
                            - ((int)p | 61) + 661)));
  v = (float)((214660943LL + (long long)v_9) % (long long)((int)p + 343));
  v_5 = (short)(! ((0 - (int)v_7) ^ 1));
  result = (double)(~ ((int)((short)(- v)) % ((int)(! p) + 853)) + - (
                    (int)(! v_5) * -18369));
  return result;
}


