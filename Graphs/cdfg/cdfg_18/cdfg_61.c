#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 673990588
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, float p_5, long long p_9, unsigned short p_11)
{
  unsigned char v_17;
  unsigned long v_15;
  unsigned long v_13;
  double v_7;
  float v;
  short result;
  v_17 = (unsigned char)p_11;
  v_15 = 3945UL;
  v_13 = (unsigned long)p_11;
  if ((unsigned long)(((int)((unsigned char)-9.50916170866e+36) * 155) % (
                      (int)p_11 + 529)) >= - (v_13 * v_15 + (unsigned long)(
                                              (int)v_17 & (int)((unsigned char)2.35333918529e+38f)))) {
    v_7 = (double)(~ (- p_9 * 36780LL));
    result = (short)v_7;
    v = (float)result;
  }
  else v = (float)(- (-189213566ULL));
  result = (short)((float)((p - (unsigned long)v) >> 4LL) - p_5);
  return result;
}


