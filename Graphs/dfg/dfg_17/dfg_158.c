#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 409898903
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p[5][5], signed char p_9, long p_17)
{
  unsigned int v_15;
  int v_13;
  short v_11;
  int v_7;
  long long v_4;
  char v;
  signed char result;
  v_15 = 3360467878U;
  v_13 = (int)p[4][0];
  v_11 = (short)-9184;
  v_7 = (int)p_17;
  v_4 = 16096853LL;
  v_11 = (short)((((unsigned long)(p_17 + (long)v_13) + 4294909869UL) - (unsigned long)(
                  p[4][2] % (- p[2][3] + 136U))) - (unsigned long)(89 / (
                                                                   ! v_7 / (
                                                                   (int)v_11 + 109) + 856)));
  v_4 = (74965950LL - (long long)(10719 + (int)v_11)) & (long long)(153 - 
                                                                    v_7 / (
                                                                    (int)p_9 + 175)) % (
                                                        ((v_4 + (long long)v_13) + (long long)v_15) + 316LL);
  v = (char)((unsigned long)v_7 * ! (~ (449377382UL - (unsigned long)p_9)));
  result = (signed char)((unsigned long long)(~ v) - (12169ULL * (unsigned long long)(- v_4)) / (unsigned long long)(
                                                     p[2][0] + 335U));
  return result;
}


