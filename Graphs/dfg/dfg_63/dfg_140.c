#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638262667
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p)
{
  unsigned short v_11;
  unsigned int v_9;
  char v_7;
  unsigned short v_5;
  unsigned long long v;
  float result;
  v_11 = (unsigned short)35384;
  v_9 = 3646714313U;
  v_7 = (char)(~ (- ((int)p + (int)v_11)) ^ 28);
  v_5 = (unsigned short)v_9;
  v = (unsigned long long)(! ((int)(~ v_5) * ((int)(- v_7) % ((int)(! p) + 952))));
  result = (float)((! v * 238ULL) % (unsigned long long)((int)p + 639));
  return result;
}


