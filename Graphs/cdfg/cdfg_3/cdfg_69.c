#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 772450410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, unsigned long p_9)
{
  long long v_17;
  unsigned long long v_15;
  unsigned short v_13;
  unsigned int v_11;
  double v_7;
  unsigned long v_5;
  unsigned short v;
  long long result;
  v_17 = (long long)p;
  v_13 = (unsigned short)p_9;
  v_11 = (unsigned int)p;
  v_7 = 2.16425765678e+38;
  v_5 = p_9;
  v = (unsigned short)20111;
  while ((int)p == (int)((char)((double)((232363851UL / (v_5 + 560UL)) / (unsigned long)(
                                         (int)v + 1006)) + v_7 * (double)(
                                                           p_9 - (unsigned long)v_11)))) {
    v_15 = (int)v_13 % -57491;
    v_13 = (unsigned short)((unsigned long long)v_11 + 10819ULL % (! v_15 + 928ULL));
    v = (unsigned short)((long long)(- (p_9 % 945139023UL)) & ((long long)v % (
                                                               v_17 + 362LL)) / (long long)(
                                                              (unsigned int)v_13 % (
                                                              v_11 + 521U) + 502U));
    v_5 = (unsigned long)((double)v_13 / (v_7 + 682.));
  }
  while_0_break: ;
  result = (long long)(~ v);
  return result;
}


