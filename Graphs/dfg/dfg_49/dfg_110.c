#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 952106078
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned char p_9, long p_13)
{
  long v_15;
  float v_11;
  int v_7;
  long v_5;
  long long v;
  double result;
  v_15 = p_13;
  v_11 = (float)p;
  v_5 = -286447022L;
  v_7 = (int)((double)(~ (~ p_13)) * ((double)p_13 / 168.900028421));
  result = (double)(! (p * (unsigned long long)((float)p_9 - v_11) + (unsigned long long)(- (
                       p_13 + v_15))));
  v = (long long)((long)result * (~ (~ v_5) / (long)(~ (- v_7) + 517)));
  result = (double)(~ ((unsigned long long)v % (~ (18446744073652905848ULL | p) + 20ULL)));
  return result;
}


