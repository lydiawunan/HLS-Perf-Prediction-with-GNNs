#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106957430
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, unsigned short p_7[1][2][2],
                  unsigned long p_13[5][1], unsigned int p_15, float p_17)
{
  long v_19;
  unsigned long long v_11;
  unsigned long long v_9;
  short v_4;
  int v;
  unsigned long result;
  v_19 = 9924411L;
  v_9 = (unsigned long long)p;
  v = (int)p;
  result = p_13[3][0];
  v_11 = (unsigned long long)((0LL / (long long)(! result + 896UL) + (long long)(~ p_15)) ^ (long long)(
                              1UL | (p_13[4][0] * p_13[3][0] + (unsigned long)(~ p_7[0][1][1]))));
  v_4 = (short)(- ((v_9 * v_11) % (unsigned long long)((p_13[4][0] + (unsigned long)v) + 895UL)) + (unsigned long long)(
                (unsigned long)(p_15 - (3772311096U - (unsigned int)p_17)) * (unsigned long)v_19));
  v = (int)((1 / (((long long)v_4 ^ (p + (long long)p_7[0][1][1])) + 361LL)) % (long long)(
            (int)v_4 + 206));
  result = (unsigned long)(- (v << ((int)(~ (~ v_4)) & 31)));
  return result;
}


