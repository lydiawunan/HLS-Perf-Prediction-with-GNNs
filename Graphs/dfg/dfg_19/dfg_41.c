#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 801134949
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, short p_5, float p_7, long p_13[1], unsigned short p_19[5])
{
  signed char v_17;
  long v_15;
  char v_11;
  unsigned char v_9;
  unsigned char v;
  double result;
  v_17 = (signed char)-63;
  v_15 = -7603L;
  v_11 = (char)-26;
  v = (unsigned char)224;
  v = (unsigned char)(~ ((p & (int)p_19[2]) * ((int)p_5 + (int)p_5)) * - (
                      (int)(~ v) + (int)(~ p_19[4])));
  v_11 = (char)(((-615L & p_13[0]) + ((long)v_11 & v_15)) % (long)((int)v_17 + 966));
  v_9 = (unsigned char)(! 0);
  result = (double)(! (! p << ((int)v / (p + 597) & 31)) * (int)((float)(~ p_5) / (
                                                                 - p_7 + 60.f) - (float)v_9));
  return result;
}


