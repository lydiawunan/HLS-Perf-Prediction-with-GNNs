#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 248569883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, double p_11)
{
  long long v_15;
  long long v_13;
  char v_9;
  char v_7;
  unsigned int v_4;
  unsigned long v;
  long result;
  v_15 = -437348857LL;
  v_13 = (long long)p_11;
  v_9 = (char)-105;
  v_7 = (char)p_11;
  v_4 = (unsigned int)p_11;
  v = (unsigned long)p_11;
  result = (long)p_11;
  result = (long)((long long)(~ ((long)v_7 / (result + 501L))) - (~ v_13 * (long long)(
                                                                  p_11 * (double)v_15)) * (long long)(~ v));
  v_7 = (char)(- ((long)(-36 / ((int)p + 625)) + ! result));
  v = (unsigned long)p_11;
  result = (long)(((((float)v + -1.71590239932e+38f) - (float)v_4) + (float)(
                   (int)p * ((int)v_7 - (int)v_9))) / ((float)p + 406.f));
  return result;
}


