#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 632396382
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, float p_7, unsigned long long p_9, unsigned long p_15,
        unsigned short p_17)
{
  float v_13;
  unsigned int v_11;
  long long v_4;
  unsigned int v;
  int result;
  v_13 = p_7;
  v_11 = (unsigned int)p_7;
  v_4 = 288042429LL;
  v = 4031676141U;
  result = -39564;
  while ((unsigned long long)p_7 <= p_9 >> (((long long)p_7 % (v_4 + 535LL)) % (long long)(
                                            result + 458) & 63LL)) {
    v_13 = (unsigned int)v_13 + v_11 % 202U;
    v_11 = (unsigned int)p_17;
    v = 4294967173U;
    v_4 = (long long)p_15;
  }
  while_0_break: ;
  result = (int)((double)(! ((long long)v % (v_4 + 513LL))) - - p * - p);
  return result;
}


