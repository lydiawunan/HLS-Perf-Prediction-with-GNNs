#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 618124347
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, char p_9, unsigned long long p_11, unsigned long long p_15,
          long p_17)
{
  unsigned char v_19;
  char v_13;
  int v_7;
  float v_4;
  signed char v;
  float result;
  v_19 = (unsigned char)p_9;
  v_13 = (char)p_11;
  v_7 = (int)(((unsigned long long)(! v_13) * (p_15 / 18446744073709551516ULL)) * (unsigned long long)(~ (
              p_17 / (long)((int)v_19 + 386))));
  if ((unsigned long long)(! (- (v_7 / ((int)p_9 + 817)))) >= p_11) result = (float)3361877790U;
  else {
    v_4 = (float)(-(unsigned char)14);
    v = (signed char)(! ((int)(- v_4) * (-3641 + (int)p)));
    result = (float)v;
  }
  return result;
}


