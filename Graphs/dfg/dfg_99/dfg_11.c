#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 383561895
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, char p_5, double p_7)
{
  float v_11;
  float v_9;
  float v;
  double result;
  v_11 = (float)p_7;
  v_9 = 8937773056.f;
  result = (double)((int)p_5 - 12187);
  result = - (- ((result * -546561960.) / (double)((v_11 + 46010144.f) + 1001.f)));
  v = (float)((unsigned long long)p_5 * ((unsigned long long)(4294924116U + (unsigned int)p) + 
                                         (unsigned long long)p_7 * 18446744073709508158ULL)) - - (- v_9);
  result = (double)((unsigned long)result - ~ ((unsigned long)(- v) - (
                                               (unsigned long)p | 611473230UL)));
  return result;
}


