#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 690691030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned char p_5, unsigned long long p_7)
{
  int v_13;
  unsigned long v_11;
  short v_9;
  long v;
  long result;
  v_13 = 40017;
  v_11 = (unsigned long)p_7;
  v_9 = (short)v_13;
  v = (long)p;
  v_11 = (unsigned long)((unsigned long long)v_11 + - (p_7 * 132ULL | 
                                                       (unsigned long long)v_11 % 65279ULL));
  result = (long)((unsigned long long)((unsigned long)v - 8UL * (unsigned long)(
                                                          4233209764U * (unsigned int)p)) % (
                  ((unsigned long long)(p * p) * ((unsigned long long)p_5 * p_7)) % (unsigned long long)(
                  ((unsigned long)(- v_9) + v_11) + 700UL) + 169ULL));
  return result;
}


