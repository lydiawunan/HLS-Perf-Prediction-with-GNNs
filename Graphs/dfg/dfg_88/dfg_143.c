#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001644002
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p)
{
  unsigned long long v_13;
  short v_11;
  unsigned long long v_9;
  unsigned char v_6;
  signed char v_4;
  int v;
  unsigned short result;
  v_13 = (unsigned long long)p;
  v_11 = (short)p;
  v_9 = 47798ULL;
  v_6 = (unsigned char)182;
  v = -367725872;
  v_11 = (short)((unsigned long long)(~ p % (long)(~ v + 366)) * (v_13 * (unsigned long long)(- v_11)) + (unsigned long long)p);
  v_4 = (signed char)v_9;
  v = (int)(~ (v_9 | 18446744073709503173ULL) % (unsigned long long)(
            ((unsigned long)(-3.02241145347e+38 + (double)v_4) - 3334156817UL) + 862UL) - (unsigned long long)(
            (int)(- (- v_11)) / (((int)v_4 + (int)(~ v_11)) + 9)));
  result = (unsigned short)(~ ((unsigned long long)(- v) + ((unsigned long long)(
                                                            (int)v_4 / (
                                                            (int)v_6 + 325)) - (
                                                            (unsigned long long)p - 18446744073709511716ULL))));
  return result;
}


