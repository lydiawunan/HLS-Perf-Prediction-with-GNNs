#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 869114564
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, long p_11, signed char p_13)
{
  double v_15;
  signed char v_8;
  unsigned int v_6;
  long long v_4;
  unsigned long v;
  unsigned long long result;
  v_15 = 2.50967666428e+38;
  v_8 = (signed char)p_11;
  v_6 = 4208741148U;
  v_4 = -23284LL;
  v = 4294949232UL;
  result = (unsigned long long)p_13;
  while (! ((v_4 % -30061LL) % -21609LL) != (v_4 - 234LL) % (long long)(
                                            (int)(~ (- p_13)) + 1008)) {
    v_6 = v_15 - -13345.;
    v_15 = (double)(- (result % (unsigned long long)((v_6 - (unsigned int)v_8) + 579U)));
    result = 51ULL % ((164ULL | result) * (unsigned long long)(-211L | p_11) + 1016ULL);
    v_4 = (long long)(4294941274UL - (unsigned long)(p_11 * -16L));
  }
  while_0_break: ;
  while (7912LL * ((long long)v % (v_4 + 141LL)) > (long long)v_6) {
    v = (unsigned long long)v_8 | 18446744072745465063ULL;
    v_6 = (unsigned int)((long long)((p_11 * (long)p) / (long)((int)p + 25)) % (
                         v_4 + 9LL));
    v_8 = p;
    v_4 = (long long)(527669098ULL % (result % 51798ULL + 190ULL) - (unsigned long long)(
                      v_6 % (unsigned int)((int)p + 540)));
  }
  while_0_break_0: ;
  return result;
}


