#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 695474369
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned char p_11[4][5], long p_13,
              signed char p_15[3][1])
{
  double v_9;
  signed char v_7;
  unsigned long long v_5;
  unsigned long long v;
  long long result;
  v_9 = (double)p;
  v_7 = (signed char)78;
  v_5 = 29357ULL;
  v = (unsigned long long)p_11[3][2];
  result = (long long)(- (303373707 - (int)p_11[0][2]));
  while (((unsigned long long)((long long)p % -583189202LL) + (v + v_5)) + (unsigned long long)(
         305188092LL >> ((int)p & 63)) <= (unsigned long long)(- (! (! v_7)))) {
    v = (unsigned long long)((long long)(- ((double)v_5 * v_9)) * (257726712LL - (long long)(
                                                                   p_13 - (long)p_15[1][0])));
    result = (long long)((unsigned long long)(27618UL - (unsigned long)(~ p)) / (
                         (((unsigned long long)p_11[1][1] + 18446744072840754551ULL) - (unsigned long long)(~ p)) + 412ULL));
    v_5 = (unsigned long long)(~ (! (result * result)));
  }
  while_0_break: ;
  return result;
}


