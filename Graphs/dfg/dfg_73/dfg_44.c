#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 782900772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned char p_4)
{
  unsigned long long v;
  double result;
  v = 18446744073709551571ULL;
  result = (double)(~ ((unsigned long long)((float)p * -393.374298096f) ^ 
                       p % (unsigned long long)((int)p_4 + 124)) * (1ULL + 
                                                                    (
                                                                    2ULL - v) / (
                                                                    (unsigned long long)2.62998406826e+38 + 939ULL)));
  return result;
}


