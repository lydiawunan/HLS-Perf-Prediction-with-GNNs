#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557719471
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, unsigned long p_4, long long p_9, int p_13,
              unsigned char p_19)
{
  unsigned short v_21;
  unsigned long long v_17;
  char v_15;
  char v_11;
  signed char v_7;
  float v;
  long long result;
  v_17 = 18446744073027932899ULL;
  v_15 = (char)-1;
  result = (long long)p_19;
  if ((long long)(((p_4 % (unsigned long)((int)v_15 + 148)) * p_4) % 7UL) < 1015544512LL) {
    v = (float)p;
    v_7 = (signed char)v_15;
    result = (long long)v_7;
  }
  else {
    v_21 = (unsigned short)(! ((long)p_19 % -29730L - -414293481L));
    v = (float)((unsigned long long)(! ((int)v_21 + -2)) + 18446744073506849878ULL);
    v_7 = (signed char)(~ (v_17 + (unsigned long long)((int)p_19 ^ (int)v_21)));
  }
  while ((float)((result - (long long)p) % (long long)(((unsigned long)p + p_4) + 659UL) ^ 38995LL) > v) {
    v_11 = (int)v_7 - -556816768;
    v_7 = (signed char)((18446744073572748381ULL | (unsigned long long)v_11) + (unsigned long long)(! (
                        3702292321UL % (unsigned long)(p_13 + 546))));
    result = ~ (-174LL % (p_9 + 211LL) & 3LL);
    result /= (long long)(((p_4 | (unsigned long)v_7) - ! p_4) + 866UL);
  }
  while_0_break: ;
  return result;
}


