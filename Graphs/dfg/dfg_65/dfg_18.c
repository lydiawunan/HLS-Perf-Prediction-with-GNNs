#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 282442039
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p)
{
  short v_13;
  unsigned int v_11;
  unsigned long v_9;
  int v_7;
  unsigned int v_5;
  signed char v;
  long result;
  v_13 = (short)p;
  v_11 = 492686386U;
  v_5 = (unsigned int)p;
  v = (signed char)91;
  result = (long)p;
  v_9 = (unsigned long)(((long long)(! ((unsigned long)v_11 & (unsigned long)result)) * - (
                         -9945LL ^ (long long)2.93525348344e+38f)) % (long long)(
                        (int)v_13 + 1005));
  v_7 = (int)(~ (! 28260UL));
  result = (long)((0 % (long long)((int)(~ p) + 184) - (long long)(4294936634U * (unsigned int)v - (unsigned int)(- p))) * (long long)(
                  (unsigned long)(v_5 % 4294967255U + (unsigned int)(- v_7)) / (
                  v_9 + 729UL)));
  result = result;
  return result;
}


