#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658566658
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long long p, unsigned long p_9)
{
  unsigned long long v_13;
  long v_11;
  short v_7;
  signed char v_5;
  signed char v;
  int result;
  v_11 = -579261220L;
  v_7 = (short)p_9;
  v_5 = (signed char)54;
  v = (signed char)-31;
  result = (int)p;
  v_13 = (unsigned long long)(- ((unsigned long)(- v_5) - p_9));
  while (((long long)((int)((signed char)7.20762805039e+37) - (int)v) / (
          p % -9709424853LL + 906LL)) / 607LL < 292178873LL) {
    v = (signed char)(((4294967171UL + p_9) + (unsigned long)(~ v_7)) >> (
                      ((unsigned long)v_11 / (p_9 + 262UL) << ((v_13 << (
                                                                (int)v_5 & 63)) & 31ULL)) & 31UL));
    result = (int)p_9;
    v = (signed char)((long long)(- result * ((int)v_5 % 8631)) / (! (
                                                                   p / (long long)(
                                                                   (int)v + 398)) + 616LL));
  }
  while_0_break: ;
  return result;
}


