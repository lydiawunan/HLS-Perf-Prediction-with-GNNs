#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 60592332
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned int p_5, int p_7[4][5][2],
                signed char p_9, unsigned long long p_11[1])
{
  unsigned long long v_19;
  long v_17;
  long v_15;
  long v_13;
  unsigned int v;
  signed char result;
  v_17 = (long)p_5;
  v_13 = (long)p;
  v = 895916960U;
  result = (signed char)p_5;
  v_15 = (long)(0 % 3649060737UL);
  while ((unsigned long long)(-329989650LL % ((long long)((float)p / (
                                                          ((float)v - -671.563537598f) + 392.f)) + 252LL)) >= 
         (unsigned long long)((p_5 + (unsigned int)p_7[3][4][1]) * (unsigned int)p_9) - (
         3826495232ULL >> (p_11[0] & 63ULL))) {
    v_15 = v_17 * (v_15 | (v_13 | -41L));
    v_19 = (p | p) + 53ULL;
    result = (signed char)(! v_19 - 18446744073143855410ULL);
    v = (unsigned int)(~ (! v_19 / (unsigned long long)((int)(! result) + 429)));
  }
  while_0_break: ;
  return result;
}


