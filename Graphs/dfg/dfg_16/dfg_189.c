#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 201845844
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, char p_5[1], long long p_11,
                unsigned long p_13, unsigned short p_17)
{
  int v_19;
  char v_15;
  char v_9;
  long v_7;
  unsigned int v;
  signed char result;
  v_19 = (int)p;
  v_15 = (char)81;
  result = (signed char)p_5[0];
  v_7 = (long)(p_11 / ((long long)p_17 * - (4294940079LL & p_11) + 962LL));
  v = (unsigned int)(7392LL & (464132667LL + (long long)p_13));
  v_9 = (char)(~ (((long long)p_13 % -288599302LL) % (long long)((-42672 | 
                                                                  v_19 / (
                                                                  (int)result + 956)) + 515)));
  result = (signed char)(((long long)(- ((unsigned int)p * v)) % ((long long)(
                                                                  (long)p_5[0] - v_7) % (
                                                                  ((long long)v_9 + p_11) + 447LL) + 594LL)) / (long long)(
                         - (p_13 % (unsigned long)((int)v_15 + 929)) / (
                         (((unsigned long)p_17 - p_13) + 330975227UL * (unsigned long)p) + 148UL) + 988UL));
  return result;
}


