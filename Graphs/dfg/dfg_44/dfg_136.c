#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 186846074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, short p_4, unsigned short p_9, double p_11[4],
         float p_15)
{
  char v_19;
  long long v_17;
  float v_13;
  unsigned int v_7;
  unsigned short v;
  char result;
  v_19 = (char)-115;
  v_17 = 656569569LL;
  v_13 = (float)(((unsigned long long)(~ (! v_17)) * 18446744073709537664ULL) % (unsigned long long)(
                 - ((p * -51LL) % (p * (long long)v_19 + 113LL)) + 747LL));
  v_7 = (unsigned int)((int)(((155. - p_11[2]) * (double)(1044272000.f / (
                                                          v_13 + 54.f))) / (double)(
                             (float)(p % -35803924LL) * (p_15 + -826190144.f) + 937.f)) % (
                       ~ (! (-57 - (int)((char)-802.561279297f))) + 710));
  v = (unsigned short)((int)((unsigned short)(4417873408.f + (float)p_4)) % (
                       (int)(! (! p_9)) + 869) + (int)p_9);
  result = (char)((p | (long long)(- (- p_4))) - (long long)(! ((unsigned int)(! v) - ~ v_7)));
  return result;
}


