#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 631869037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned long long p_4, long long p_9,
        signed char p_13, unsigned short p_15)
{
  double v_11;
  char v_7;
  long v;
  int result;
  v_7 = (char)74;
  v = 34912L;
  result = 22640;
  v_11 = (double)((long long)(- (27433 / ((int)p_13 + 629)) / (((int)(~ p) - 
                                                                (int)p_15 % (
                                                                (int)p_13 + 656)) + 246)) - - (
                  (long long)v & 706825909LL));
  v = (long)(~ ((int)p_13 | (122 * (int)p_15 + result)));
  result = (int)v_11;
  result = (int)(((unsigned long long)(! (~ p)) - p_4 * (unsigned long long)(
                                                  -56476LL - (long long)v)) - (unsigned long long)(
                 (long long)((long)(result * 26345) * (-6387634L | (long)result)) - (
                 (long long)result | (long long)v_7 / (p_9 + 445LL))));
  return result;
}


