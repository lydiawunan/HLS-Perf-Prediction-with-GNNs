#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82561284
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned long long p_4, unsigned short p_6)
{
  unsigned long v;
  signed char result;
  v = (unsigned long)p_4;
  result = (signed char)(! (4294967170UL % (((unsigned long)p_6 + v) + 311UL)));
  result = (signed char)((unsigned long long)(~ ((int)p * 38578)) % (
                         (unsigned long long)((int)result - (int)p) / (
                         p_4 * 18446744073709502173ULL + 3ULL) + 272ULL));
  return result;
}


