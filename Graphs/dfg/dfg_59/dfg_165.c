#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 253322727
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, signed char p_5, int p_11, unsigned long p_15)
{
  signed char v_13;
  long v_9;
  char v_7;
  long long v;
  unsigned long result;
  v_13 = (signed char)p_15;
  v_9 = (long)p;
  v = -4495LL;
  result = 222215710UL;
  result = - (! (result * (unsigned long)(~ p_11)));
  v_7 = (char)((18440LL >> (-56273L % (long)((int)v_13 + 612) & 63L)) * (long long)p_15 & (long long)(
               ((long)p_11 + -52313L % (long)(p_11 + 762)) - - (! v_9)));
  v = ((long long)((int)p_5 * (int)v_7) / (- v + 885LL) + (long long)(
       (v_9 >> (p_11 & 31)) | (long)((double)v_7 + -2458798341.01))) % (long long)(
      (int)v_13 + 111);
  result = (unsigned long)(((long long)(((unsigned long)p & result) / 687UL) / (
                            (v ^ (long long)p) / (long long)((int)(! p_5) + 957) + 420LL)) % -5571LL);
  return result;
}


