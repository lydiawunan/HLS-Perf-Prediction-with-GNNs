#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 739922757
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, long long p_4, int p_7, unsigned long long p_9,
              unsigned int p_13)
{
  unsigned int v_15;
  unsigned short v_11;
  unsigned int v;
  long long result;
  v_15 = 41659U;
  v_11 = (unsigned short)20499;
  if ((unsigned long long)(~ ((unsigned int)p_7 * v_15)) + - (~ p_9) == (unsigned long long)(~ p_4)) {
    v = ! ((unsigned int)v_11 / (p_13 + 513U) + (unsigned int)p);
    result = (long long)(- (~ ((unsigned long long)p_7 - p_9)));
    result = (4294911425LL ^ (result >> ((int)p & 63))) + (long long)(
             v / (unsigned int)(p_7 + 436) ^ 4294939517U);
  }
  else result = (long long)(24556 ^ (int)p);
  if ((unsigned long long)((p_4 & 1834566822LL) - result) >= 35975ULL) 
    result = (long long)((int)(- p) * (int)((char)-965.004177638));
  else result = (long long)(- (- (- -523167648.f)));
  return result;
}


