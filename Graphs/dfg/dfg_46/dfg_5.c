#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 637578865
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p)
{
  unsigned int v_9;
  char v_7;
  long long v_5;
  unsigned long v;
  unsigned long long result;
  v_9 = p;
  v_7 = (char)p;
  v_5 = (long long)p;
  v = 703520253UL;
  v_7 = (char)((long long)v % (- ((long long)(~ v_7) + (v_5 - (long long)v_9)) + 45LL));
  result = (unsigned long long)v_7;
  v_5 = -32614LL;
  result = (! result - (unsigned long long)(v + 55UL)) % (unsigned long long)(
           (p << (~ p & 31U)) + 1015U) - (unsigned long long)v_5;
  return result;
}


