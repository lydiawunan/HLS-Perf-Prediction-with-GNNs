#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 974660288
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, long long p_9, unsigned short p_15)
{
  double v_13;
  unsigned long v_11;
  int v_7;
  long long v_4;
  signed char v;
  signed char result;
  v_13 = (double)p_15;
  v_11 = (unsigned long)p_15;
  v_7 = 41199;
  v_7 = (int)(- ((double)(v_11 - (unsigned long)v_7) * (40407.5639019 / (
                                                        (v_13 - (double)p_15) + 111.))));
  v_4 = (p ^ (long long)v_7) / (122LL / (- p_9 + 965LL) + 834LL);
  v = (signed char)(! (! v_4 % 33822LL) - -6182368768LL);
  result = v;
  return result;
}


