#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 663162280
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, long long p_7, signed char p_9,
                   long p_11[1][5][5], unsigned long p_17)
{
  signed char v_19;
  long v_15;
  signed char v_13;
  double v_5;
  long long v;
  unsigned short result;
  v_15 = (long)p_9;
  v_13 = p_9;
  v = 67113576LL;
  v_19 = (signed char)(~ (- v / (long long)(p_11[0][0][2] + 645L)));
  if ((unsigned long)v_13 > ((unsigned long)v_15 | (- p_17 - (unsigned long)v_19 % (
                                                             p_17 + 535UL)))) {
    v_5 = (double)(826697646080.f + (float)p_9);
    v = 44LL % (((long long)(- v_5) + (p & p_7)) + 236LL);
    result = (unsigned short)(p - v);
  }
  else result = (unsigned short)(! (! (~ p_11[0][0][4])));
  return result;
}


