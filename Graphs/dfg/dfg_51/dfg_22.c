#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 73469606
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, short p_7[4], long p_9)
{
  int v_13;
  unsigned short v_11;
  unsigned int v_5;
  unsigned char v;
  unsigned char result;
  v_13 = p;
  v_11 = (unsigned short)p_9;
  v = (unsigned char)p_7[1];
  v_5 = (unsigned int)(~ (((long)(37164 * (int)v) + ((long)-3.11174681256e+38 + p_9)) >> (
                          ((long long)(- v_11) + (236559961LL + (long long)v_13)) & 31LL)));
  v = (unsigned char)(~ ((((unsigned long long)p & 45345ULL) + (unsigned long long)v_5) / (unsigned long long)(
                         (int)p_7[0] + 898)));
  result = (unsigned char)(! (p * (int)v));
  return result;
}


