#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228032767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(void)
{
  char v_6;
  char v_4;
  unsigned short v;
  double result;
  v_6 = (char)-123;
  v_4 = (char)(0 - 18446744073709494414ULL * (unsigned long long)v_6);
  result = (double)(~ (! (- (19062 % ((int)v_4 + 912)))));
  v = (unsigned short)(40629680UL + (unsigned long)result);
  result = (double)(~ (~ v));
  return result;
}


