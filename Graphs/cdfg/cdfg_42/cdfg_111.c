#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 326167896
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, long long p_4[3][1][4], long long p_6, char p_8[4][3],
         int p_11[3])
{
  long long v_17;
  signed char v_15;
  long v_13;
  long v;
  long result;
  v_13 = (long)p_6;
  v = (long)p_6;
  result = 478885827L;
  v_13 = (long)(29181UL % (3768323104UL * (unsigned long)(v_13 + v_13) + 387UL));
  while ((long long)((long)(41 % ((int)p_8[2][0] + 965)) % (v + 859L) << (
                     ~ p_11[1] & 31)) <= - (p_6 / (p_6 + 467LL)) % ((
                                                                    (long long)result % -54787LL) * p_4[0][0][3] + 992LL)) {
    v_15 = v_13 / 54396L;
    v_17 = (long long)(-0);
    v_13 = (long)v_17;
    v = (long)v_15;
  }
  while_0_break: ;
  return result;
}


