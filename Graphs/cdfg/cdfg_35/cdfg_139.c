#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265898609
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, char p_4, char p_7, double p_9, char p_13)
{
  unsigned int v_17;
  long long v_15;
  int v_11;
  unsigned long long v;
  long result;
  v_17 = (unsigned int)p_7;
  v = 18446744073452655418ULL;
  if ((unsigned long long)p_7 <= (18446744072777230928ULL % (unsigned long long)(
                                  (int)p_13 + 294) + ~ v) / (unsigned long long)(
                                 ~ (- v_17) + 796U)) {
    v_15 = (long long)(- ((unsigned long long)(v_17 + 4294949612U) % (
                          ((unsigned long long)v_17 - 18446744072960848678ULL) + 29ULL)));
    v_11 = (int)((((unsigned long long)p_13 + v) - (unsigned long long)v_15) + (
                 (unsigned long long)(v_15 ^ 897327911LL) - - v));
    v = (unsigned long long)v_11;
  }
  else v = (unsigned long long)(30 + (int)((char)p_9));
  if ((v ^ (unsigned long long)p_7) >= (unsigned long long)((long)(- p_9 * 58.) * p)) 
    result = ! p;
  else result = (long)p_4;
  return result;
}


