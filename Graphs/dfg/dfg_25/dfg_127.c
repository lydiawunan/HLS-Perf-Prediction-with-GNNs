#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 79808875
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long long p_7, long long p_9,
                 unsigned short p_13, unsigned long long p_19)
{
  unsigned int v_17;
  unsigned long v_15;
  signed char v_11;
  unsigned char v_5;
  unsigned int v;
  unsigned int result;
  v_17 = 3556484749U;
  v_15 = 397663370UL;
  v_11 = (signed char)p_19;
  v_5 = (unsigned char)p;
  v_5 = (unsigned char)((unsigned long long)(- (~ ((int)v_11 + (int)p_13))) % (
                        ((unsigned long long)((unsigned long)-458.915506953 / (
                                              (v_15 - (unsigned long)v_17) + 414UL)) ^ (
                         76ULL + p_19 * (unsigned long long)v_5)) + 472ULL));
  v_5 = (unsigned char)((unsigned long long)((long long)v_5 - 775542609LL / (long long)(
                                                              (int)p + 736)) * p_7 & (unsigned long long)(
                        p_9 / -12LL));
  v = (unsigned int)(21ULL * (0ULL - ((unsigned long long)v_5 % (p_7 + 831ULL) ^ (unsigned long long)-9376257024.f)));
  result = ~ (! ((unsigned int)(~ p) / (! v + 751U)));
  return result;
}


