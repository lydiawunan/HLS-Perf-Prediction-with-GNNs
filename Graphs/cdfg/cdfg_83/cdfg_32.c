#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 672649859
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, char p_7, unsigned long long p_11, unsigned char p_13)
{
  unsigned long long v_15;
  long v_9;
  int v_5;
  unsigned char v;
  long long result;
  v_15 = (unsigned long long)p_7;
  v_9 = -79L;
  if (- ((unsigned long long)((int)p_13 ^ -60) + - v_15) != (unsigned long long)(
      1 / 3762937475LL)) {
    v_5 = (int)v_9;
    v = (unsigned char)((double)(! v_5) + - (8519444772.45 / ((double)p_7 + 488.)));
    result = (long long)((34047 * (int)p) * (int)(- (! v)));
  }
  else result = (long long)((double)p_11 / -2.66202303856e+38);
  return result;
}


