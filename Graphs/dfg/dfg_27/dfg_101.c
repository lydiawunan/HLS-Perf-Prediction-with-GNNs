#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 701641678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned long long p_7[2][1],
                  signed char p_11, long p_15)
{
  float v_13;
  long long v_9;
  long long v_4;
  signed char v;
  unsigned char result;
  v_13 = 9562931200.f;
  v_4 = (long long)p_11;
  v = (signed char)p_7[0][0];
  v_9 = (long long)((float)(~ v_4) / ((- v_13 * (float)(p_15 + 63642L)) / (
                                      (float)v + 616.f) + 867.f));
  v_4 = (long long)(((p_7[0][0] - (unsigned long long)v_9) / (unsigned long long)(
                     62920LL / ((11434LL ^ v_9) + 570LL) + 318LL)) * (unsigned long long)p_11);
  v = (signed char)(- (-148LL / (v_4 + 565LL) - 62LL) * (long long)(-423061471L | (long)p));
  result = (unsigned char)v;
  return result;
}


