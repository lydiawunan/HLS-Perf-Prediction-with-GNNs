#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 625934745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, short p_4, short p_7, double p_9, short p_15)
{
  unsigned long long v_19;
  unsigned int v_17;
  unsigned char v_13;
  unsigned char v_11;
  int v;
  unsigned long long result;
  v_17 = 40492U;
  v_13 = (unsigned char)p_4;
  v_11 = (unsigned char)247;
  v = -6916;
  while ((long)(p_9 + (double)(104UL * (unsigned long)(-23909 * (int)v_11))) == 
         (~ p * -93L) / (long)((int)v_11 + 486)) {
    v_19 = 56679ULL;
    v = (int)((unsigned long long)((int)p_7 / ((int)p_7 + 970) - (v - (int)p_4)) - (
              (unsigned long long)((unsigned int)p_4 - v_17) - (unsigned long long)v_13 * v_19));
    v_11 = (unsigned char)(~ ((v - (int)p_4) & ((int)p_15 << ((int)p_4 & 15))));
  }
  while_0_break: ;
  result = (unsigned long long)(- ((p - (long)p_4) / (long)(v % ((int)p_7 + 371) + 377)));
  return result;
}


