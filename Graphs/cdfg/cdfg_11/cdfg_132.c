#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 784694807
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, long p_11[5], signed char p_15)
{
  unsigned char v_17;
  unsigned char v_13;
  int v_9;
  long long v_6;
  unsigned long long v_4;
  double v;
  long result;
  v_17 = (unsigned char)192;
  v_13 = (unsigned char)p;
  v_9 = (int)p_15;
  v_6 = (long long)p_11[3];
  v_4 = (unsigned long long)p_11[3];
  v = -7942847140.85;
  result = p_11[1];
  result = ! (! (! result));
  while ((unsigned long long)(- v) < (~ v_4 + (unsigned long long)(v_6 + (long long)p)) * (unsigned long long)(! (
                                     (long)v_9 + p_11[1]))) {
    result = (float)v_13 * 1.07277051556e+38f;
    v_13 = (unsigned char)((unsigned int)p_15 % ((65459U % (unsigned int)(
                                                  v_9 + 617)) % (unsigned int)(
                                                 (int)((unsigned char)v) * (int)v_17 + 890) + 866U));
    v_6 = (long long)p_15;
    v_9 = (int)p;
  }
  while_0_break: ;
  return result;
}


