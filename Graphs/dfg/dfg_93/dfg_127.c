#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 843509511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p[2], long long p_7, long long p_9,
                   short p_13)
{
  unsigned long long v_11;
  signed char v_5;
  long long v;
  unsigned short result;
  v = p_9;
  result = (unsigned short)(~ ((unsigned long long)(25259173LL % (p_9 + 120LL)) / (
                               ((unsigned long long)((int)p_13 / -39298) & (
                                9316ULL + p[1])) + 345ULL)));
  v_11 = 11949ULL;
  v_5 = (signed char)((unsigned long long)(~ (! ((long long)result / (
                                                 p_7 + 958LL)))) / ((
                                                                    (unsigned long long)(
                                                                    (
                                                                    p_9 - 24242LL) - -60LL) ^ ~ (
                                                                    18446744073709492829ULL * v_11)) + 920ULL));
  result = (unsigned short)(-2.79215510038e+37f / ((float)((0ULL - (p[1] << (
                                                                    v & 63LL))) + (unsigned long long)v_5) + 176.f));
  return result;
}


