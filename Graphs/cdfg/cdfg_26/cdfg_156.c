#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150296537
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, int p_4, signed char p_11, float p_15, long p_17)
{
  unsigned long v_23;
  unsigned int v_21;
  signed char v_19;
  int v_13;
  char v_9;
  signed char v_7;
  unsigned short v;
  unsigned long result;
  v_23 = 4294943821UL;
  v_21 = (unsigned int)p_11;
  v_13 = (int)p_11;
  v_9 = (char)p_4;
  v_7 = (signed char)p_15;
  v = (unsigned short)p_15;
  result = 3632050776UL;
  if ((unsigned long long)(~ (4294917980UL * v_23 + 198UL)) <= 18446744073709551531ULL) {
    v_21 = (unsigned int)((unsigned long)p_4 / ((~ v_23 - (unsigned long)(
                                                 p_15 / ((float)p + 601.f))) + 343UL));
    v_7 = (signed char)(11935L + (p_17 / (long)(p + 983)) % (long)(((int)v_9 >> (
                                                                    (int)v & 7)) + 29));
    v_19 = (signed char)(! (-100069LL));
  }
  else {
    v_9 = (char)(result % (unsigned long)((int)p_11 + 148));
    v_19 = (signed char)(v_13 - 0 % (- v_13 + 196));
    v = (unsigned short)v_9;
  }
  if ((float)v_19 != - ((p_15 / ((float)v_13 + 677.f)) * (float)v_21)) {
    v_9 = (char)102;
    result = (unsigned long)((((int)((unsigned short)-3.14274162098e+37f) % (
                               (int)v + 913)) / ((37980 & (int)v_7) + 410)) * (
                             (int)v_9 % ((int)p_11 + 406)));
    result = 0UL - (~ result & (unsigned long)p_4 * 23894UL);
  }
  else {
    v_13 = (int)(~ (! (p_17 % (long)(p_4 + 81))));
    result = 3507441309UL % (unsigned long)(! (v_13 << ((int)p_15 & 31)) + 893);
  }
  return result;
}


