#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1001986429
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p)
{
  unsigned int v_11;
  int v_9;
  unsigned long v_7;
  int v_5;
  unsigned short v;
  signed char result;
  v_11 = 4294959474U;
  v_9 = 409496978;
  v = (unsigned short)p;
  result = (signed char)p;
  v_5 = (int)(! v_11 / 144U);
  v_7 = (unsigned long)((((long long)(~ p) & ((long long)result - -24705LL)) / (long long)(
                         ~ ((int)-2.06694669391e+38f * v_5) + 753)) * -8LL);
  v_5 = (int)(- ((long long)(v_7 * (unsigned long)v_9) - 927932514LL) - (long long)p);
  result = (signed char)(- (((31608ULL - (unsigned long long)v) / (unsigned long long)(
                             (p - (long)v_5) + 757L)) * (unsigned long long)(! (
                            v_7 + 53UL))));
  return result;
}


