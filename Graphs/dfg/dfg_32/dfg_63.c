#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 694933339
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, char p_5, unsigned long p_7,
              unsigned short p_11, signed char p_15)
{
  unsigned int v_19;
  unsigned long long v_17;
  float v_13;
  long v_9;
  char v;
  long long result;
  v_19 = (unsigned int)p;
  v_9 = (long)p_7;
  v_17 = (unsigned long long)((unsigned long)v_19 / (p_7 + 737UL));
  v_13 = (float)(~ (1072893270ULL | ((unsigned long long)(- p_15) - v_17)));
  v = (char)((~ p_7 / ((unsigned long)-7.87700741522e+37f + 900UL)) * (
             ((unsigned long)(v_9 - -75L) / ((p_7 | (unsigned long)p_11) + 140UL)) % (
             (unsigned long)v_13 + 1007UL)));
  result = (long long)(~ ((int)(-341.278859468 / ((double)p + 184.) - 106401344.) - 
                          (int)p * ((int)v / ((int)p_5 + 949))));
  return result;
}


