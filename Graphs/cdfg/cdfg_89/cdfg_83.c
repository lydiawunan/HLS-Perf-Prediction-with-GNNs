#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 183469645
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned long long p_4, signed char p_7, char p_9,
          unsigned long p_11)
{
  unsigned char v_17;
  float v_15;
  float v_13;
  unsigned long v;
  float result;
  v_17 = (unsigned char)p_11;
  v_13 = (float)p;
  result = (float)p_9;
  v_15 = (float)((int)p_7 - (int)(- (~ v_17)));
  if ((unsigned long long)(- (25657.f * v_13) * (float)(! (p_11 + (unsigned long)v_15))) != 18446744073709504400ULL) {
    v = (unsigned long)(~ ((unsigned long long)p_11 + p_4) ^ (unsigned long long)(
                        (p_11 - (unsigned long)p_9) * (unsigned long)(- result)));
    result = (float)(- ((unsigned long long)v * p_4) + (unsigned long long)(
                     (int)p_7 - (int)p_9));
    result = (float)((unsigned long long)((unsigned long)result * - p) - (
                     ~ p_4 + ! p_4));
  }
  else result = (float)0.;
  return result;
}


