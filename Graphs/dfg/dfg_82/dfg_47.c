#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 509472883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned int p_5, double p_11)
{
  char v_15;
  long long v_13;
  long long v_9;
  short v_7;
  float v;
  unsigned long result;
  v_15 = (char)p_11;
  v_13 = (long long)p_11;
  v_9 = (long long)p;
  v_9 = (long long)(((67. - p_11) * (double)v_13 + (double)(! (- v_15))) / (
                    (double)v_9 + 359.));
  v_7 = (short)-20890;
  v = (float)6765428070.88;
  result = (unsigned long)((unsigned long long)(! (! ((long)v % (p + 881L)))) | 
                           (unsigned long long)(p_5 % 59435U - (unsigned int)v_7) % (
                           - ((unsigned long long)v_9 * 64808ULL) + 69ULL));
  return result;
}


