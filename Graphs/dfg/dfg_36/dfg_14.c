#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409472862
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, char p_4, unsigned long p_6,
                 unsigned short p_9, unsigned long long p_13)
{
  unsigned short v_21;
  unsigned long long v_19;
  signed char v_17;
  long v_15;
  double v_11;
  long long v;
  unsigned int result;
  v_19 = p_13;
  v_17 = (signed char)p;
  v_11 = (double)p_6;
  v = -603196000LL;
  v_15 = (long)v_11;
  v_21 = (unsigned short)(- (27594LL / ((long long)p_9 / (v / 16282LL + 255LL) + 1005LL)));
  v = (long long)(((double)(- (11 + (int)p_9)) - (v_11 + (double)(54946ULL % (
                                                                  p_13 + 687ULL)))) * (double)(- (
                  (v_15 + (long)v_17) << (v_19 * (unsigned long long)v_21 & 31ULL))));
  result = (unsigned int)((long long)(7045234926.14 - (double)(p >> (p & 31U))) % (
                          (long long)((unsigned long)((int)p_4 >> 2UL) - p_6) / (
                          - (59069LL * v) + 949LL) + 478LL));
  return result;
}


