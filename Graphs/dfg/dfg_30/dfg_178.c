#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 196491486
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, int p_7[4][2], unsigned long p_13, short p_15)
{
  unsigned short v_11;
  char v_9;
  float v_5;
  long long v;
  short result;
  v_11 = (unsigned short)38663;
  v_5 = -1.06500488798e+38f;
  result = (short)p;
  v_9 = (char)((double)(((unsigned long)(~ v_11) + ~ p_13) - (unsigned long)p_15) - 
               (double)((10293U / (unsigned int)((int)result + 26)) * 37U) / 2.56608564947e+38);
  v = (long long)(! (~ v_9));
  result = (short)(! ((v % (long long)((int)p + 897)) / (long long)((int)v_5 / (
                                                                    p_7[1][0] + 443) + 872)) % (long long)(
                   p_7[1][0] + 862));
  return result;
}


