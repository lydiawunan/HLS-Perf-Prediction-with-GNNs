#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870017622
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[2], long long p_7, long p_11, float p_15)
{
  char v_13;
  float v_9;
  double v_5;
  unsigned long v;
  signed char result;
  v_13 = (char)84;
  v_5 = (double)p[1];
  result = (signed char)(18446744073709490992ULL / (unsigned long long)(
                         ((long long)(- (- v_13)) + 267425415LL / ((long long)(- p_15) + 847LL)) + 918LL));
  v_9 = (float)((long)result + ! (! p_11) * 122L);
  v = (unsigned long)(~ (((long long)(p[0] % ((unsigned int)v_5 + 775U)) - p_7) & 
                         (long long)((int)v_9 & 172422256) / ((p_7 ^ (long long)p[1]) + 593LL)));
  result = (signed char)((-2326504192.f + (float)(v * (unsigned long)p[1] << 14LL)) - 57.f);
  return result;
}


