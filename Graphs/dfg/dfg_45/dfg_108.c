#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 413269195
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, unsigned long long p_5, float p_9,
          long long p_11[1][4], long p_13)
{
  unsigned long v_17;
  char v_15;
  long v_7;
  unsigned short v;
  float result;
  v_15 = (char)p_9;
  v = (unsigned short)22511;
  result = (float)p_13;
  v_17 = (unsigned long)p;
  v_7 = (long)(((p_5 * (unsigned long long)v) / ((unsigned long long)(- result) + 829ULL)) % (
               (unsigned long long)v_15 * (p_5 - (unsigned long long)v_17) + 73ULL));
  v = (unsigned short)(~ (! p_13));
  result = (float)((((unsigned long long)((double)p - 2.5700908048e+38) + 
                     (unsigned long long)v / (p_5 + 557ULL)) - (unsigned long long)(
                    (30746L ^ (long)-2914797568.f) % (((long)v + v_7) + 819L))) + 
                   ((unsigned long long)(- p_9) ^ p_5) / (unsigned long long)(
                   ~ (! p_11[0][1]) + 533LL));
  return result;
}


