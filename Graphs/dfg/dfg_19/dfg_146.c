#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 981403442
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned long p_7,
                       unsigned short p_9, unsigned long p_11, long long p_13)
{
  float v_21;
  char v_19;
  int v_17;
  int v_15;
  float v_5;
  double v;
  unsigned long long result;
  v_19 = (char)p_7;
  v_17 = (int)p_9;
  v_15 = (int)p;
  v_21 = (float)(! (! ((int)p_9 & - v_17)));
  v_5 = (float)(~ (((p_13 * (long long)v_15) * (long long)(v_17 << ((int)v_19 & 31))) % (
                   (long long)((float)p_7 + - v_21) + 497LL)));
  v = (double)(- (7.56659984098e+37f * ((v_5 / ((float)p_7 + 603.f)) / (
                                        (float)((int)p_9 >> (p_11 & 15UL)) + 31.f))));
  result = (unsigned long long)((double)((int)(~ (! p)) + ((int)p * (int)p + (
                                                           (int)p | (int)p))) + - (
                                - v + 0.));
  return result;
}


