#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600953088
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, float p_15)
{
  unsigned int v_13;
  double v_11;
  unsigned long v_9;
  long long v_7;
  unsigned long long v_5;
  short v;
  unsigned char result;
  v_13 = (unsigned int)p_15;
  v_11 = -1885972164.06;
  v_9 = (unsigned long)p_15;
  v_7 = 33463986LL;
  v_5 = 19184ULL;
  v = (short)3134;
  while ((unsigned long long)(~ (~ ((int)p * 25981))) == ! v_5 % (unsigned long long)(
                                                         (41046 & 63 % (
                                                                  (int)((char)-1.42812593772e+38f) + 164)) + 645)) {
    v_7 = v_11 + (double)((long long)v_9 % (v_7 / -290997910LL + 357LL));
    v_9 = 271UL;
    v = (short)(-4294966716UL);
    v_5 = (unsigned long long)(~ v_13 % (unsigned int)((int)p * 1942 + 925) ^ 4294967232U);
  }
  while_0_break: ;
  result = (unsigned char)v;
  return result;
}


