#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988088124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, long p_7, unsigned long long p_9)
{
  double v_19;
  short v_17;
  unsigned long long v_15;
  signed char v_13;
  unsigned long long v_11;
  long long v_4;
  unsigned long v;
  short result;
  v_19 = 9017673596.94;
  v_17 = (short)p_9;
  v_15 = 589053076ULL;
  v_13 = (signed char)p_9;
  v_11 = (unsigned long long)p;
  v_4 = (long long)p_7;
  v = (unsigned long)p;
  result = (short)p_7;
  while ((unsigned long long)p + (unsigned long long)(! v_17) / (p_9 / (unsigned long long)(
                                                                 (int)v_13 + 794) + 773ULL) == p_9) {
    v = v_19 - -41411.;
    v_19 = (double)((int)v_13 * 59);
    v_4 = (long long)507.816131592f;
    v_13 = (signed char)(- ((unsigned long long)(p_7 % (p_7 + 964L)) - 
                            (unsigned long long)p * 18446744073709549468ULL));
  }
  while_0_break: ;
  while ((unsigned long long)(31056UL / (v + 907UL)) - (unsigned long long)(
         v_4 - (long long)p) > ! ((unsigned long long)p_7 * (p_9 + v_11))) {
    v_4 = (int)v_13 + 9065;
    result = (short)(~ -40639LL);
    result = (short)0;
    v_11 = (18446744073117581650ULL * (unsigned long long)result) / (unsigned long long)(
           (int)(! p) + 454) - 18446744073709491625ULL;
  }
  while_0_break_0: ;
  return result;
}


