#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 617953232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned long p_5[3][4][1], float p_7[4][4][1],
        char p_9, unsigned char p_11)
{
  unsigned char v_19;
  unsigned int v_17;
  signed char v_15;
  signed char v_13;
  unsigned long v;
  int result;
  v_19 = (unsigned char)p_7[2][1][0];
  v_17 = 22158U;
  if (7376LL > 0 - (long long)(~ v_19)) {
    v = (unsigned long)(- (- -611002869));
    v_15 = (signed char)124;
    v_13 = (signed char)((unsigned long)(~ v_15));
  }
  else {
    v_13 = (signed char)(6751ULL - (unsigned long long)((unsigned long)v_17 / 721017348UL) / (
                                   (unsigned long long)p_5[1][1][0] / 18446744073709546003ULL + 441ULL));
    v = (unsigned long)(~ (101 * (int)((signed char)-1594632188.9)));
    v_13 = (signed char)((unsigned int)v_13 / (p % 135U + 424U));
  }
  if (-13055 != - ((int)v_13 * 73 ^ (int)p_7[0][2][0])) {
    result = (int)(~ ((unsigned long)p + v));
    result = result;
    result = result;
  }
  else result = (int)((p_5[2][3][0] / ((unsigned long)p_7[0][2][0] + 604UL) ^ (unsigned long)(! p_9)) + p_5[0][0][0]);
  return result;
}


