#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 832056039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, unsigned long p_13)
{
  short v_11;
  unsigned long v_8;
  unsigned char v_6;
  unsigned int v_4;
  int v;
  signed char result;
  v_11 = (short)p_13;
  v_4 = (unsigned int)p_13;
  v = (int)p_13;
  v_8 = (unsigned long)(! (char)-72);
  v = (int)((unsigned long)(((unsigned int)v - (v_4 - v_4)) / (unsigned int)(
                            (int)v_11 + 647)) - ((unsigned long)(- (! v)) - (
                                                 p_13 + (unsigned long)-5845930830.37 % (
                                                        p_13 + 538UL))));
  v_6 = (unsigned char)((((long long)(63 >> 3) ^ (long long)v_8 / (p + 63LL)) + 6107535360LL) % 77LL);
  result = (signed char)(~ ((int)((unsigned char)((float)((unsigned int)v * v_4) - 1.69642418726e+38f)) / (
                            (int)v_6 + 502)));
  return result;
}


