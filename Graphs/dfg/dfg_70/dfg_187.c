#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 704949065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, unsigned int p_9, unsigned long p_11,
          unsigned int p_13)
{
  signed char v_15;
  long long v_7;
  long long v_4;
  char v;
  short result;
  v_15 = (signed char)-19;
  v_7 = (long long)p_9;
  v_4 = (long long)p_11;
  v = (char)(3397460463LL / (! ((long long)p_13 * v_7) + 43LL) & (long long)(~ v_15));
  v = (char)((unsigned long)(~ v) / ((~ (p_11 + 96UL) - (unsigned long)p_13) + 882UL));
  v_7 = (long long)(((((unsigned long long)v % (p + 474ULL)) * 46923ULL) % (
                     (unsigned long long)(~ v) % (p + 27ULL) + 567ULL)) % (
                    ~ ((p + (unsigned long long)v) + (unsigned long long)(
                       (unsigned int)v / (p_9 + 200U))) + 635ULL));
  result = (short)((unsigned long long)((long long)(~ v) + ((v_4 & -53LL) + -548457917LL)) / (
                   (p ^ (unsigned long long)v_7) % (! p + 372ULL) + 334ULL));
  return result;
}


