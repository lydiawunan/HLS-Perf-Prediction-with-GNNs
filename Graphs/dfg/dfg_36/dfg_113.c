#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764229255
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, signed char p_5, double p_7, signed char p_11,
                  long long p_13)
{
  int v_17;
  long v_15;
  unsigned long v_9;
  int v;
  unsigned char result;
  v_15 = -30848L;
  v_9 = (unsigned long)p_11;
  v_17 = 365;
  v = (int)((long long)(0UL - ~ (v_9 / (unsigned long)((int)p_11 + 612))) % (
            ((p_13 + (long long)v_15) * (long long)(~ v_17) - 108LL) + 623LL));
  result = (unsigned char)(- (- ((double)((float)v - 3157197312.f) - 
                                 (double)p_5 / (p_7 + 69.))));
  result = (unsigned char)(- (~ (((int)result + (int)p) / 574)));
  return result;
}


