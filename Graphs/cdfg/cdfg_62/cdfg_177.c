#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606323623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long long p, signed char p_4[4], unsigned char p_6[2],
                  unsigned long long p_8, signed char p_10)
{
  unsigned char v_23;
  int v_21;
  int v_19;
  float v_17;
  char v_15;
  float v_13;
  unsigned long v;
  unsigned long result;
  v_23 = (unsigned char)134;
  v_21 = -10048;
  v_19 = (int)p_6[1];
  v_17 = -797.039123535f;
  v_15 = (char)-69;
  v_13 = (float)p;
  v = (unsigned long)p_4[2];
  while (! ((int)v_15 / ((int)((char)(120.f - v_17)) + 877)) <= v_19) {
    v_19 = (int)v_23 * (v_21 / ((int)8752475539.91 + 885));
    v_17 = (float)((unsigned long long)(~ ((int)p_4[1] | 46596)) * (p_8 + (unsigned long long)(! p)));
    v_21 = (int)(((long long)v_15 / (p % ((long long)v_17 + 468LL) + 608LL)) % (long long)(
                 (-45248L & 8326L * (long)p_4[3]) + 471L));
    v_15 = (char)(- ((float)(66141293 | (int)v_17) / (v_13 / ((float)v_19 + 75.f) + 70.f)));
  }
  while_0_break: ;
  if ((unsigned long long)(~ ((unsigned long)(4294946534U >> ((int)p_10 & 31)) % (
                              ((unsigned long)p_6[1] + v) + 590UL))) == 
      ((unsigned long long)(-4327 % ((int)((short)v_13) + 997)) * (120899585ULL * p_8)) * (
      (unsigned long long)(! p_4[0]) - ((unsigned long long)p_4[1] + p_8))) 
    result = (unsigned long)(~ (~ p));
  else {
    result = ~ 0UL;
    result = (unsigned long)((unsigned long long)p_4[0] * ((unsigned long long)p_6[0] * p_8) - (unsigned long long)(
                             result % (unsigned long)((int)p_10 + 96)));
  }
  return result;
}


