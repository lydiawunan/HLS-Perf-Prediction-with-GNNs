#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 298592098
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p[5], long long p_9, unsigned char p_11,
              unsigned short p_13[1], long p_17)
{
  float v_15;
  float v_7;
  unsigned char v_5;
  long long v;
  long long result;
  v_15 = (float)p[1];
  result = (long long)p_17;
  v_7 = (float)((int)p_11 - (int)((unsigned char)(- (- (v_15 * (float)p_17)))));
  v_5 = (unsigned char)((int)p_11 + (int)p_13[0]);
  v = (~ (result - p_9) >> (((17422 << ((int)v_5 & 15)) ^ 22) & 63)) % (long long)(
      (int)v_5 + 166);
  result = (long long)((unsigned long long)(- (((long long)p[3] + v) / 14920994LL)) + 
                       (unsigned long long)((v - (long long)v_5) / (long long)(
                                            ((int)v_7 >> 8) + 110)) * (
                       (unsigned long long)(! p_9) % 47359ULL));
  return result;
}


