#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415521375
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, long long p_7)
{
  signed char v_5;
  char v;
  double result;
  v_5 = (signed char)(! ((long long)p - p_7));
  v = (char)-107;
  result = (double)(65535LL ^ ((long long)((int)p / (17 % ((int)v + 388) + 274)) & 
                               (long long)v_5 % (- p_7 + 935LL)));
  return result;
}


