#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 216240566
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long long p, unsigned short p_15, unsigned short p_17)
{
  unsigned long long v_21;
  unsigned int v_19;
  long v_12;
  double v_10;
  float v_8;
  float v_6;
  char v_4;
  unsigned int v;
  float result;
  v_21 = 18446744073050746951ULL;
  v_19 = 42888U;
  v_10 = 161.569518735;
  v_8 = 800.693603516f;
  v_6 = (float)p_15;
  v_4 = (char)p_17;
  v = (unsigned int)((unsigned long long)(! (- ((int)((char)4767940166.87) / (
                                                (int)v_4 + 985)))) + (
                     (unsigned long long)(~ v_19) - ((unsigned long long)v_8 << (
                                                     v_21 & 63ULL))));
  v_12 = (long)(- ((int)p_15 % ((int)((unsigned short)(v_10 + 3727643671.)) / (
                                (int)p_17 + 455) + 114)));
  v_8 = (float)p;
  result = (float)(((double)(~ v % (unsigned int)(((int)v_4 >> ((int)((char)v_6) & 7)) + 238)) * (
                    (double)(- v_8) - (double)v_6 / (v_10 + 1010.))) * (double)(~ (~ p)));
  return result;
}


