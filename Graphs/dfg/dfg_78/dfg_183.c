#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 796878612
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[1][1], unsigned long long p_5, unsigned long p_7, int p_9)
{
  long long v;
  double result;
  result = (double)(! (37 ^ (int)((char)-7793500889.04)));
  v = (long long)p_9;
  result = (double)((unsigned long long)((602921853LL - (v | (long long)p[0][0])) + (long long)(
                                         result - (double)(p_5 + (unsigned long long)p_7))) + 
                    ~ (18446744073304551411ULL + (unsigned long long)p[0][0]) * (unsigned long long)p_9);
  return result;
}


