#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058847572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, char p_5[4], unsigned int p_7,
           unsigned long long p_11)
{
  unsigned short v_9;
  unsigned long v;
  double result;
  v_9 = (unsigned short)(- 8.54606528905e+37f);
  v = (unsigned long)(~ ((unsigned long long)p_7 - ((unsigned long long)(- v_9) + (
                                                    (unsigned long long)-2.58273181814e+38f + p_11))));
  result = (double)(v & ((p * (unsigned long)p_5[0]) % 4294902944UL + v));
  return result;
}


