#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 264799408
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, short p_7, long long p_9, short p_11, unsigned int p_17)
{
  float v_15;
  unsigned short v_13;
  short v_5;
  char v;
  short result;
  v_13 = (unsigned short)p;
  v = (char)76;
  v = (char)(251969225U * (unsigned int)(((-2 | (int)p_11) * (int)v) / 62978));
  v_15 = (float)p_17;
  v_5 = (short)((long)p_11 / ((12965L % (long)((int)(! v_13) + 242)) / (
                              (long)v_15 + 50L) + 27L));
  result = (short)((long long)(- ((int)p * (int)v) + (((int)v_5 ^ (int)p_7) - 
                                                      (int)p_7 * (int)v)) % (
                   ((~ p_9 - (long long)2.49020650789e+38f) - (long long)v_5) + 950LL));
  return result;
}


