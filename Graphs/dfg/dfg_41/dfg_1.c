#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 529988505
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned long long p_5, long p_9, unsigned char p_15,
           char p_17)
{
  signed char v_13;
  int v_11;
  signed char v_7;
  short v;
  double result;
  v_13 = (signed char)p;
  v_7 = (signed char)111;
  v = (short)((((int)p_15 + (int)p_17) % ((int)(~ v_13) + 911) << ((int)v_7 & 31)) % -19103);
  v_11 = (int)(- (4294921894UL * (unsigned long)(~ (- v_13))));
  v_7 = (signed char)(~ v_11);
  result = (double)(- ((unsigned long long)((int)v * (int)((short)(- p))) * (
                       18446744073709502016ULL * p_5 + (unsigned long long)(
                       (long)v_7 | p_9))));
  return result;
}


