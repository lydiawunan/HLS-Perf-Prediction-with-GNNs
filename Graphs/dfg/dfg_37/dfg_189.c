#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78521629
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, double p_7, unsigned int p_15)
{
  unsigned long long v_13;
  unsigned long v_11;
  float v_9;
  unsigned char v_4;
  unsigned short v;
  char result;
  v_13 = 18446744073709506222ULL;
  v_9 = (float)p;
  result = (char)p_7;
  v_4 = (unsigned char)((unsigned long long)(- ((int)(~ result) * (int)result)) * (
                        ~ ((unsigned long long)-4550646272.f << (v_13 & 63ULL)) * (unsigned long long)p_15));
  v_11 = (unsigned long)(- result);
  v = (unsigned short)(! ((int)((unsigned char)(- p_7)) / 508) - (int)(
                       3443722496.f / (- v_9 + 437.f) - (float)(30898UL * v_11)));
  result = (char)(! (~ ((int)v << ((int)v_4 & 15))) / ((int)p + 683));
  return result;
}


