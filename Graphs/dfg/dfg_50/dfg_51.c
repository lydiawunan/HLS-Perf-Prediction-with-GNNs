#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 6101852
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p)
{
  int v_9;
  unsigned long long v_6;
  unsigned short v_4;
  char v;
  unsigned int result;
  v_9 = -24337469;
  v = (char)(~ v_9);
  v_6 = (unsigned long long)p;
  v_4 = (unsigned short)(- (((double)(! p) + (double)p / 1.0393873284e+38) / -2.00056419269e+38));
  result = (unsigned int)((unsigned long long)v * ~ ((unsigned long long)(
                                                     233 % ((int)v_4 + 434)) / (
                                                     (unsigned long long)3.20653045484e+38 % (
                                                     v_6 + 349ULL) + 198ULL)));
  return result;
}


