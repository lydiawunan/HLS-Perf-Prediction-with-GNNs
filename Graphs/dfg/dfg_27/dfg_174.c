#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1062641860
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, unsigned int p_5, float p_9, unsigned short p_11,
          double p_15)
{
  short v_13;
  double v_7;
  long long v;
  float result;
  v_13 = (short)-24885;
  v_7 = p_15;
  result = (float)((unsigned int)(v_7 * (double)p_9) % (! ((unsigned int)p_11 / (
                                                           (64950U - (unsigned int)v_13) + 717U)) + 958U));
  v = (long long)(~ ((4012642015U - (unsigned int)p) % (~ ((unsigned int)result % (
                                                           p_5 + 535U)) + 437U)));
  result = (float)((unsigned long long)(65535 - - ((int)p & -6287)) % (
                   ~ (! ((unsigned long long)v * 877257428ULL)) + 512ULL));
  return result;
}


