#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641300056
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned long long p_7, unsigned char p_13)
{
  unsigned long long v_15;
  int v_11;
  short v_9;
  short v_4;
  unsigned long long v;
  long result;
  v_15 = 18446744073446315759ULL;
  v_9 = (short)-2413;
  v_11 = 19827;
  v_4 = (short)(- ((unsigned long long)(~ v_11 / 914) - (unsigned long long)(
                                                        (int)p_13 / 21287) / (
                                                        18446744073709551606ULL % (
                                                        v_15 + 205ULL) + 244ULL)));
  v = (0 - (unsigned long long)((int)v_4 + (int)p)) % (p_7 + 560ULL) + (unsigned long long)v_9;
  result = (long)(18446744072815395523ULL / (~ (- v) + 519ULL) & 331941073ULL);
  return result;
}


