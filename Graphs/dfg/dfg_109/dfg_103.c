#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 55198841
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, unsigned char p_5, float p_9)
{
  unsigned int v_7;
  signed char v;
  double result;
  v_7 = 4294960062U;
  v = (signed char)(((unsigned long)p / (unsigned long)(! v_7 + 591U) + 55268UL) / (unsigned long)(
                    (unsigned int)p_9 % 715562863U + 299U));
  result = (double)(~ (((long)v - p) + (-411430181L - (long)p_5)));
  return result;
}


