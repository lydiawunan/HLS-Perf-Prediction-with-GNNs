#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591750473
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned short p_7, unsigned long long p_9, long long p_11,
        int p_13)
{
  long long v_5;
  char v;
  int result;
  v = (char)((long long)p_13 - 40007LL);
  v_5 = (long long)((unsigned long long)p_7 + (343171194ULL * (unsigned long long)p_7) / (
                                              (p_9 * 12529ULL) / (unsigned long long)(
                                              (165LL - p_11) + 278LL) + 201ULL));
  result = (int)(((unsigned long long)(~ (~ p)) - 18446744073709532845ULL) * (unsigned long long)(
                 (long long)(157 + (int)v) / (v_5 % 36LL + 869LL) | (long long)(! (! p))));
  return result;
}


