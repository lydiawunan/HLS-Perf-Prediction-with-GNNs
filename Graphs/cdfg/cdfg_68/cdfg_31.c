#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274373299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, int p_5, float p_7, char p_13[5][5][2],
          long long p_15)
{
  int v_17;
  char v_11;
  unsigned long long v_9;
  unsigned long v;
  float result;
  v_17 = 104675260;
  v = 33461UL;
  if (! (~ ((long long)p_13[1][2][1] + p_15)) < (long long)(! v_17)) 
    v = (unsigned long)(- ((float)p_5 / ((-53.f + p_7) + 767.f)));
  else {
    v_11 = (char)(59333UL + v);
    v_9 = (unsigned long long)(! ((unsigned long)(- v_11) ^ (544691129UL + (unsigned long)-478.387451172f)));
    v = (unsigned long)(~ (! (! v_9)));
  }
  result = (float)(! (~ p * v));
  return result;
}


