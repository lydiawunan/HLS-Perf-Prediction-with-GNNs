#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944515434
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned short p_13)
{
  short v_11;
  unsigned int v_9;
  unsigned long long v_7;
  unsigned long long v_5;
  unsigned long v;
  unsigned long long result;
  v_11 = (short)-20901;
  v_7 = 18446744073709548811ULL;
  v_5 = (unsigned long long)p_13;
  result = (unsigned long long)p;
  v_7 = (v_5 / (unsigned long long)((int)v_11 + 771) & ((result + 4294956405ULL) >> 56L)) * (
        (- v_7 * 898452266ULL) % (unsigned long long)((int)(~ p) + 828));
  v_9 = (unsigned int)p;
  v = (unsigned long)((unsigned long long)p - - (~ result));
  result = ((unsigned long long)((unsigned long)(-786 + (int)p) * - v) + (
            (117ULL & v_5) - (unsigned long long)((int)p << (v_7 & 15ULL)))) + (unsigned long long)(
           - (v_9 / (unsigned int)((int)v_11 + 152)) / (unsigned int)(
           (int)p_13 + 191));
  return result;
}


