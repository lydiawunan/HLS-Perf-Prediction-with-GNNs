#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 792679845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, signed char p_11,
                       unsigned long long p_15)
{
  unsigned int v_13;
  unsigned long long v_9;
  short v_7;
  char v_5;
  unsigned char v;
  unsigned long long result;
  v_9 = (unsigned long long)p;
  v_7 = (short)-31957;
  v_5 = (char)(! (- ((p_15 * 18446744073709551600ULL) / (unsigned long long)(
                     ((int)((unsigned char)-2.3748202853e+38f) - (int)p) + 595))));
  v_13 = (unsigned int)(- v_7);
  v = (unsigned char)((unsigned long long)p * ((unsigned long long)((int)v_5 << (
                                                                    (int)v_7 & 7)) * (
                                               v_9 % (unsigned long long)(
                                               (int)p_11 + 720) - (unsigned long long)(
                                               (unsigned int)p | v_13))));
  result = (unsigned long long)v;
  return result;
}


