#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 223007461
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, signed char p_11)
{
  char v_17;
  char v_15;
  unsigned int v_13;
  unsigned long long v_9;
  float v_7;
  unsigned short v_4;
  double v;
  long long result;
  v_17 = (char)-11;
  v_15 = (char)p_11;
  v_13 = 464852561U;
  v_9 = (unsigned long long)p;
  v = (double)p;
  v_7 = (float)((v_9 & (unsigned long long)v_15) * (unsigned long long)(
                ((int)p_11 & (int)v_17 / ((int)v_15 + 954)) - 321078244 * (int)p_11));
  v_9 = (unsigned long long)v_13;
  v_4 = (unsigned short)(v_7 * (- (v_7 * (float)v_9) + (float)(- (! p_11))));
  result = (long long)(- ((int)((unsigned short)(- v / ((double)((long long)v_4 + p) + 345.))) % (
                          (int)v_4 + 211)));
  return result;
}


