#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 202280457
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, int p_7, unsigned int p_9, double p_11[5][1][5],
              long long p_17)
{
  unsigned long long v_21;
  char v_19;
  unsigned short v_15;
  unsigned long v_13;
  unsigned long v_5;
  char v;
  long long result;
  v_19 = (char)18;
  v_15 = (unsigned short)14749;
  v_13 = 4294932933UL;
  result = -7827LL;
  if (182LL / (- (~ result) + 219LL) >= (long long)(~ p_7)) {
    v_5 = (unsigned long)(-48978LL * ((long long)v_15 - 710685875LL));
    v = (char)((unsigned long)((unsigned int)(p_7 * -26) % ((unsigned int)p_7 % (
                                                            p_9 + 356U) + 757U)) - (
               (unsigned long)((double)v_5 * p_11[1][0][4]) & v_13));
    v_5 = (unsigned long)((unsigned int)p_7 / (p_9 + 416U));
  }
  else {
    v_21 = (unsigned long long)(result * (long long)(! (439544329U + (unsigned int)1.28601226564e+38f)));
    v = (char)((unsigned long long)p_17 / ((unsigned long long)((int)v_19 * (int)p) / (
                                           ((unsigned long long)p_9 - v_21) + 149ULL) + 164ULL));
    v_5 = 4294944023UL;
  }
  result = (long long)(1UL + ((unsigned long)((int)v * (int)p) + ! v_5));
  return result;
}


