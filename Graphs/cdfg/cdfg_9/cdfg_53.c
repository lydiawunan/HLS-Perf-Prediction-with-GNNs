#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 374747540
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, unsigned long p_11, short p_13, int p_21)
{
  unsigned long long v_19;
  float v_17;
  signed char v_15;
  long v_9;
  long v_7;
  unsigned long v_4;
  double v;
  char result;
  v_19 = (unsigned long long)p;
  v_17 = -4103903744.f;
  v_15 = (signed char)-47;
  v_9 = (long)p_13;
  v_7 = 565160791L;
  v_4 = 875341870UL;
  v = 7236550292.02;
  result = (char)p_11;
  while (p_11 - (unsigned long)p_13 * - p_11 != (unsigned long)(- (526729211. * - v))) {
    v_4 = (long)v_17 + -40064L;
    v_17 = (float)((unsigned long)(p_21 * ! p_21) | (unsigned long)(- p) % (
                                                    ~ p_11 + 631UL));
    v_9 = (long)((int)v_15 % (((int)(- result) | (int)((char)-7.7299651873e+37)) + 811));
    v = (double)v_19;
  }
  while_0_break: ;
  if ((((unsigned long long)v_7 + 18446744073709516280ULL) % (unsigned long long)(
       248UL / (v_4 + 386UL) + 891UL)) / (unsigned long long)((91817292L * (long)-2.87724457503e+38f) % (
                                                              ~ v_9 + 436L) + 735L) == 65086ULL) {
    result = - (char)-125;
    result = result;
  }
  else {
    v_4 = (unsigned long)(p * 14.f);
    v = (double)(54488UL * - v_4);
    result = (char)(- v);
  }
  return result;
}


