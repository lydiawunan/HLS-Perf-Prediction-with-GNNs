#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 517843819
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, double p_5, unsigned int p_7, unsigned long p_13,
          long p_15)
{
  unsigned long v_17;
  long v_11;
  unsigned long long v_9;
  unsigned char v;
  short result;
  v_17 = 3871915940UL;
  v = (unsigned char)157;
  result = (short)19865;
  if (((unsigned long long)((double)(p_15 % ((long)p_5 + 102L)) + (double)v * -4315626656.33) & 
       (unsigned long long)(- p_13) / 18446744073639711132ULL) == (unsigned long long)(- (
      p_13 * v_17 + (unsigned long)-803.893920898f))) {
    v_9 = (unsigned long long)((float)((unsigned long long)v % 18446744073709538471ULL) - - (
                               (float)result + 3.28702044028e+38f));
    result = (short)((unsigned long long)p_7 * - ((unsigned long long)v + v_9));
    v = (unsigned char)((p - 3640683852.) / (double)((float)((int)result % (
                                                             (int)((short)p_5) + 1014)) * 3163927040.f + 57.f));
  }
  else {
    v_11 = (long)(~ p_13);
    v = (unsigned char)v_11;
  }
  result = (short)v;
  return result;
}


