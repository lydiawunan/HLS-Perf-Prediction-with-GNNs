#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 884744518
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, long p_5, long p_15, float p_19,
                int p_21)
{
  signed char v_17;
  char v_13;
  unsigned char v_11;
  unsigned long long v_9;
  unsigned int v_7;
  char v;
  signed char result;
  v_13 = (char)p_19;
  v_11 = (unsigned char)p_21;
  v_9 = 18446744073685659325ULL;
  v_7 = 3473573611U;
  v = (char)118;
  while ((- p + (unsigned long long)((long)v / (p_5 + 840L))) / ((unsigned long long)v_7 / (
                                                                 v_9 + 914ULL) + 182ULL) > 25687ULL) {
    v_11 = (unsigned long)v_13 + (unsigned long)v_11 % 3320700828UL;
    v_17 = (signed char)(! (18446744073709486974ULL - (unsigned long long)(~ p_21)));
    v_13 = (char)((unsigned long long)((int)(! v_17) / ((int)((signed char)(
                                                        (float)p / (p_19 + 485.f))) + 254)) + ! (~ p));
    v_7 = (unsigned int)(~ (~ (-33890LL * (long long)p_15)));
  }
  while_0_break: ;
  result = (signed char)v;
  return result;
}


