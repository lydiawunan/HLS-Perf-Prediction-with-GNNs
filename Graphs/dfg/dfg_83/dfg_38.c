#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 84033522
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, int p_11, unsigned char p_17)
{
  double v_15;
  unsigned long v_13;
  unsigned int v_8;
  long v_6;
  signed char v_4;
  long long v;
  unsigned long long result;
  v_15 = (double)p;
  v_13 = 4294936076UL;
  v_6 = -135803214L;
  v = 20992LL;
  v_8 = (unsigned int)((unsigned long long)((18723UL + v_13 / (unsigned long)(
                                                       v_6 + 36L)) % (
                                            (unsigned long)v_15 * 4294945864UL + 78UL)) * (
                       (0 % 392460766ULL) / (unsigned long long)((41455 + (int)p_17) + 83)));
  v_6 = (long)((unsigned long long)(! (v_8 / (unsigned int)((int)p + 341) - (unsigned int)(~ p_11))) * 691961120ULL);
  v_4 = (signed char)v_6;
  result = (unsigned long long)((~ (588191364LL / (v + 493LL)) * (long long)(~ (
                                 (int)v_4 << ((int)v_4 & 7)))) * -20LL);
  return result;
}


