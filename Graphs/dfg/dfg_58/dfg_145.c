#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036879921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, signed char p_5, signed char p_11,
                   char p_15, signed char p_17)
{
  unsigned long v_19;
  float v_13;
  float v_9;
  long v_7;
  long v;
  unsigned short result;
  v_19 = 4294952229UL;
  v_13 = (float)p_15;
  v_7 = (long)p_15;
  v_9 = (float)((long long)(- (~ v_19) << ((unsigned long)(! v_7) % (
                                           (unsigned long)p_17 * p + 946UL) & 31UL)) / 628LL);
  v_7 = (long)((long long)(((-107.f - v_9) - (float)p_11) * (v_13 / (
                                                             (float)p_15 + 335.f) - (float)(
                                                             -355899957 / (
                                                             (int)p_15 + 412)))) | ~ (
               (long long)(~ p_17) / 1021LL));
  v = (long)(((long long)((long)((int)p_5 ^ 181) - v_7 % 96L) ^ 208031486LL) + (long long)(- ((unsigned long)(
             -5.3694945284e+37 + (double)p_5))));
  result = (unsigned short)((p * (p % (p + 858UL) - (unsigned long)(~ v))) * (unsigned long)2.98201670636e+38);
  return result;
}


