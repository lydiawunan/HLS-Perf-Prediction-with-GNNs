#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264309796
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, char p_7, unsigned long p_13)
{
  unsigned char v_11;
  signed char v_9;
  short v_5;
  unsigned char v;
  float result;
  v_9 = (signed char)22;
  v_5 = (short)3885;
  v = (unsigned char)108;
  v_11 = v;
  if (-44607LL < (long long)((unsigned long)(((int)v_5 + (int)p_7) - (
                                             (int)v_9 + -57)) - ((unsigned long)v_11 / (
                                                                 p_13 + 451UL)) * 2453UL)) {
    v = (unsigned char)(! p);
    result = (float)(- ((int)(! v) % 8));
  }
  else result = (float)p;
  return result;
}


