#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 853932343
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[5], int p_4, char p_9, short p_11, signed char p_13)
{
  int v_17;
  unsigned int v_15;
  int v_7;
  unsigned long v;
  unsigned int result;
  v_17 = -924752392;
  v_15 = 4294903910U;
  v = (unsigned long)(45932ULL * (unsigned long long)(~ ((long long)(- v_15) & 
                                                         23781LL / (long long)(
                                                         v_17 + 590))));
  v = (unsigned long)(- (- ((double)p_9 / (((double)v - 2.29213613809e+37) + 91.))));
  v_7 = p_4;
  result = (unsigned int)((unsigned long long)((unsigned long)(~ (p[3] - p_4)) % (
                                               ~ (! v) + 518UL)) % ((
                                                                    21319849ULL * (unsigned long long)(
                                                                    v_7 - (int)p_9) - (unsigned long long)(
                                                                    (
                                                                    3594032362U << (
                                                                    v & 31UL)) + (unsigned int)(
                                                                    (int)p_11 - (int)p_13))) + 397ULL));
  return result;
}


