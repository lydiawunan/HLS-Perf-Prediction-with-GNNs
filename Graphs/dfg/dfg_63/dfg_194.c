#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620978867
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned short p_7, double p_9, signed char p_11,
                 float p_15)
{
  long long v_13;
  char v_4;
  double v;
  unsigned int result;
  v_4 = (char)-113;
  v = (double)p_7;
  result = (unsigned int)p;
  v_13 = (long long)result;
  v_4 = (char)((unsigned long long)((long long)(((int)p_7 + (int)((unsigned short)p_9)) + (int)p_11) + (
                                    (v_13 - (long long)p_15) + -12723LL)) * ~ (
               (unsigned long long)p_11 / ((18446744073389394900ULL | (unsigned long long)v_4) + 168ULL)));
  result = (unsigned int)(- p);
  result = (unsigned int)(((double)(- (- result)) * v) * (double)(! v_4));
  return result;
}


