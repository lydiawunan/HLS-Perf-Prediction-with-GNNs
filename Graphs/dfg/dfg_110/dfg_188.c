#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 543373591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, int p_7, unsigned long p_13, double p_15,
                long p_21)
{
  unsigned short v_19;
  unsigned long v_17;
  signed char v_11;
  int v_9;
  char v_5;
  long long v;
  signed char result;
  v_19 = (unsigned short)29316;
  v_17 = 6885UL;
  v_11 = (signed char)-61;
  v_9 = (int)(p_13 & (((unsigned long)p_15 - v_17) + (unsigned long)(
                      -48441. / (p_15 + 906.))) / (unsigned long)((((long)v_19 | p_21) - 59347L) + 546L));
  v_5 = (char)((long long)v_11 * (37844LL + (long long)(~ (p * p))));
  v = (long long)(((unsigned long)v_5 * ((unsigned long)(-62055 % (p_7 + 33)) + ! p)) * (unsigned long)(- (
                  -43.4139868892 - (double)v_9)));
  result = (signed char)(~ ((long long)(~ (4294936960UL - p)) - -9LL * v));
  return result;
}


