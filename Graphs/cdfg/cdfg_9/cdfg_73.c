#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 5487223
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, short p_4, long p_7, signed char p_9,
                       float p_17)
{
  long long v_19;
  char v_15;
  short v_13;
  char v_11;
  signed char v;
  unsigned long long result;
  v_19 = 446273125LL;
  v_15 = (char)42;
  v_13 = (short)p_9;
  v_11 = (char)p_7;
  result = (unsigned long long)p_4;
  if ((long long)(26 % ((int)(~ v_15) + 857) - (int)v_11) < ~ ((long long)p_4 * 213344332LL - (long long)(
                                                               (int)p ^ (int)p))) {
    v_19 = -12480LL;
    v = (signed char)-117;
    v_15 = (char)(-21801L + (long)(~ v));
  }
  else {
    v = (signed char)(-48675LL - (long long)(~ (! v_11)));
    v_11 = (char)((double)(! ((int)((short)p_17) >> ((int)p & 15))) * (
                  (double)((int)p_9 * (int)v_15) + -8797556.5267));
    v_13 = (short)(p_17 / (((float)(~ p) + p_17) + 144.f));
  }
  while ((unsigned long long)(! ((int)p / ((int)p_4 + 923) + (int)(- v))) > 
         ((result | 229ULL) % 578ULL) * (unsigned long long)((long)((double)p_7 + 7808172926.71) * (
                                                             p_7 - (long)p_9))) {
    v = (int)v_15 << (((int)v_13 + (int)v_11 % 41677) & 7);
    v_13 = (short)p_7;
    v_15 = (char)((unsigned long long)v_19 + (51116ULL - (unsigned long long)p_9));
    result = (unsigned long long)p_17;
  }
  while_0_break: ;
  return result;
}


