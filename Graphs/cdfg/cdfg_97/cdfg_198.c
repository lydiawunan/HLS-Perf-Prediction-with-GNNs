#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1016650249
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, long long p_7, long long p_9, unsigned int p_13,
          unsigned long long p_17)
{
  double v_23;
  short v_21;
  long long v_19;
  unsigned long long v_15;
  unsigned short v_11;
  unsigned char v_5;
  char v;
  float result;
  v_23 = 7414651548.6;
  v_21 = (short)p_17;
  v_19 = -56463710LL;
  v_15 = 18446744073709550501ULL;
  v_11 = (unsigned short)360;
  v = (char)p_7;
  while (((long long)((int)p * (int)v) & -5LL % (p_7 + 689LL)) * (long long)(
         (unsigned int)v_21 % (p_13 / (unsigned int)((int)v_11 + 198) + 19U)) != 4124LL) {
    v = v_23 - 59390.;
    v_19 = (long long)((int)p % ((int)((signed char)((double)p_7 + 4.25004893779)) + 520));
    v_23 = (double)(! (p_13 & (unsigned int)(- v_21)));
    v_21 = (short)(- (- (v_23 / 283.905578613)));
  }
  while_0_break: ;
  if (p_17 >= (unsigned long long)((long long)(! (3536705174U << (p_13 & 31U))) - ~ (
                                   v_19 + p_9))) result = - (- (- -537.807861328f));
  else {
    v = (char)((unsigned long long)p_9 / ((unsigned long long)(- v_11) % (
                                          ((unsigned long long)p_13 - v_15) + 577ULL) + 319ULL));
    v_5 = (unsigned char)(~ ((long long)(~ p) / (p_7 + 349LL)));
    result = (float)((long long)(~ ((unsigned long)p - 45521UL)) & (long long)(! v) % (
                                                                   -404422835LL % (long long)(
                                                                   (int)v_5 + 822) + 760LL));
  }
  return result;
}


