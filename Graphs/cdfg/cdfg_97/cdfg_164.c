#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 213324222
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, short p_11, unsigned char p_13)
{
  float v_15;
  signed char v_9;
  short v_7;
  unsigned long long v_5;
  unsigned long long v;
  unsigned int result;
  v_15 = -2779980288.f;
  v_9 = (signed char)p_13;
  v_5 = (unsigned long long)p;
  result = (unsigned int)p;
  v = ((unsigned long long)v_15 * v_5 | 6161ULL) * 59ULL;
  while ((unsigned long long)result >= v - (unsigned long long)(- (~ p))) {
    v_7 = v_5 % 3038323ULL;
    result = (unsigned int)(((int)v_7 % -117) * (int)v_9 - ((int)p_11 - (int)(~ p_13)));
    v_5 = 18446744073709551526ULL;
    v = (unsigned long long)(- (- -2.61346288623e+36));
  }
  while_0_break: ;
  return result;
}


