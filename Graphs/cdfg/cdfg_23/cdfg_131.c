#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 666302576
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long p_7)
{
  unsigned int v_13;
  float v_11;
  char v_9;
  char v_5;
  char v;
  long result;
  v_13 = (unsigned int)p_7;
  v_11 = (float)p_7;
  v_9 = (char)p;
  v_5 = (char)102;
  result = 32175L;
  v = (char)(~ ((-549737718LL | (long long)p) / (long long)(p_7 + 38L)));
  while ((unsigned long)(((double)v * p) / ((double)(result >> 4L) + 580.)) + 1022888214UL >= (unsigned long)(~ (
         (long)v_5 % (118L % (p_7 + 125L) + 197L)))) {
    v_11 /= (float)((unsigned long long)v_9 - 18446744073709542188ULL) + 864.f;
    v_5 = (char)(- ((double)p_7 * p + (double)(4294967039U + v_13)));
    v = (char)(9537 << (! p_7 & 31L));
    result = (long)(! (- ((unsigned int)p ^ 4079067573U)));
  }
  while_0_break: ;
  return result;
}


