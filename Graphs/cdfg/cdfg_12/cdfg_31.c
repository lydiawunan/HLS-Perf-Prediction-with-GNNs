#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 113181965
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned char p_7)
{
  long long v_4;
  long long v;
  char result;
  v_4 = -36619LL;
  v = (long long)(- (((float)v_4 - p) + (float)((int)p_7 / 11425)));
  result = (char)v;
  return result;
}


