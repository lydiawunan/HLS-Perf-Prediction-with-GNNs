#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 7026930
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long long p_5, int p_7,
                       long p_13, signed char p_17)
{
  unsigned int v_19;
  unsigned long v_15;
  float v_11;
  float v_9;
  double v;
  unsigned long long result;
  v_19 = 4139880055U;
  v_15 = 13263022UL;
  v_9 = -6002838016.f;
  v = -8705311565.98;
  result = (unsigned long long)p_7;
  v_11 = (float)((unsigned long long)((int)v_9 & ((int)((signed char)v) - 8)) + - (
                 18446744073709526630ULL | p));
  while (((unsigned long long)(4294926159U + (unsigned int)v) / ((p - p) + 444ULL)) % 56691ULL >= (unsigned long long)(
         (p_5 % (long long)(p_7 + 58)) / ((long long)(v_9 - 131.f) + 372LL))) {
    v = (int)v_11 / -1039119586;
    result = (unsigned long long)((long)(-108937747 * (int)v) + p_13);
    result = ((unsigned long long)(v_15 * (unsigned long)p_17) * p) % (
             (18446744073365586496ULL | result) % (unsigned long long)(
             - v_19 + 691U) + 902ULL);
    v = (double)(- ((float)(p_13 * 80L) * -7.14375100302e-34f));
  }
  while_0_break: ;
  return result;
}


