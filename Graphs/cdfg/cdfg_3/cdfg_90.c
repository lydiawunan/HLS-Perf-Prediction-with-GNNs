#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 811650559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long long p_7, short p_9,
                  unsigned short p_13, char p_15)
{
  short v_17;
  signed char v_11;
  long long v_5;
  unsigned long long v;
  unsigned long result;
  v_17 = (short)p_7;
  if ((int)v_17 == (int)p_15) {
    v_5 = (long long)(- p_9);
    v = (unsigned long long)((long long)((float)p / -2.43071880899e+38f) % (
                             (-385519995LL / (v_5 + 489LL) | 20005LL) + 37LL));
  }
  else {
    v_11 = (signed char)(- (! (- p_15)));
    v = (unsigned long long)-2.67405629177e+38;
    v_5 = (long long)((int)v_11 - (int)p_13);
  }
  result = (unsigned long)(((v - (unsigned long long)-837.504928853) * (unsigned long long)(
                            -1188L * (long)p)) % (((unsigned long long)v_5 + p_7) % (unsigned long long)(
                                                  (unsigned long)p_9 % 411496149UL + 350UL) + 931ULL));
  return result;
}


