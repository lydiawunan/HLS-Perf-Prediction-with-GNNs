#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 934060380
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, long p_4, signed char p_6, unsigned char p_8,
         unsigned char p_10)
{
  short v_15;
  long long v_13;
  unsigned char v;
  char result;
  v_15 = (short)p_4;
  v_13 = -21719LL;
  v_15 = (short)(! (60149 >> ((int)v_15 & 15)));
  v = (unsigned char)v_15;
  result = (char)((long long)((int)p_6 * (int)p_8) + ((long long)((long)(! p_10) % (
                                                                  ~ p_4 + 431L)) - (
                                                      ((long long)v - v_13) - (long long)(
                                                      32187 / ((int)p_8 + 258)))));
  result = (char)(((unsigned long)p + (unsigned long)(- p_4)) % (unsigned long)(
                  (int)result * (int)result + 443));
  return result;
}


