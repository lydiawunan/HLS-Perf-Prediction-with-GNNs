#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 697811320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, signed char p_5, unsigned long p_13, char p_15, int p_17)
{
  unsigned short v_21;
  unsigned long v_19;
  signed char v_11;
  short v_9;
  int v_7;
  unsigned int v;
  float result;
  v_21 = (unsigned short)p_17;
  v_19 = (unsigned long)p_15;
  v_11 = (signed char)61;
  v_7 = -472280449;
  result = (float)(! (((unsigned long)(! p_17) / (~ v_19 + 863UL)) / (unsigned long)(
                      (int)(- (~ v_21)) + 522)));
  v_9 = (short)(- (p_13 / 17315UL) / (unsigned long)(((int)p_15 - (int)p_5) * 268731703 + 850) ^ (unsigned long)(
                ~ (96 % ((int)((unsigned char)p) + 758)) / ((int)result + 411)));
  v = (unsigned int)(v_7 - - (64 - ((int)v_9 - (int)v_11)));
  result = (float)(- ((unsigned long long)(- p) * ((unsigned long long)v * 18446744073709518829ULL)) * (unsigned long long)(
                   v % (unsigned int)((int)p_5 + 311)));
  return result;
}


