#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40164691
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, long long p_9[1])
{
  unsigned long long v_11;
  double v_7;
  signed char v_4;
  unsigned char v;
  long result;
  v_11 = 21024ULL;
  v_7 = (double)p;
  v = (unsigned char)99;
  result = (long)(60807ULL % (~ (- (v_11 * 2ULL)) + 838ULL));
  v_7 = v_7;
  v_4 = (signed char)((unsigned long long)(~ (~ (481398827UL / (unsigned long)(
                                                 result + 466L)))) - 
                      18446744073353641274ULL * (unsigned long long)(
                      52347LL + - p_9[0]));
  result = (long)((unsigned long long)(-20992 * (((int)v * (int)v_4) / -49348)) * (
                  26703ULL + (unsigned long long)((double)(p + (long long)v_4) / (
                                                  (v_7 - (double)p) + 950.))));
  return result;
}


