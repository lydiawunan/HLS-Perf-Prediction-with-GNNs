#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225242888
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, short p_7[4], long p_9, double p_11)
{
  int v_5;
  int v;
  long long result;
  v_5 = 20528;
  v = (int)(- p_11) + ~ (23125 + (int)p);
  v_5 = (int)(- ((long)v_5 + p_9));
  result = (long long)(! ((((unsigned long)p / 4294942588UL) / (unsigned long)(
                           ! v_5 + 33)) / (unsigned long)((long)((int)p * (int)p) * (
                                                          (long)p_7[0] % (
                                                          p_9 + 745L)) + 652L)));
  result = - (! (- result % (long long)(((int)p & v) + 201)));
  return result;
}


