#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 509964815
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, short p_9, char p_11, long p_19, unsigned short p_21)
{
  unsigned long v_17;
  unsigned short v_15;
  unsigned char v_13;
  long v_6;
  float v_4;
  char v;
  long long result;
  v_17 = (unsigned long)p_11;
  v_15 = p_21;
  v_13 = (unsigned char)9;
  v = (char)(-127-1);
  v_4 = (float)(~ ((int)-2.89293374333e+38 + (94 / ((int)v + 500) | (int)(~ p_21))));
  v_6 = (long)(- ((int)v_13 / ((int)v_15 + 311)) << (((v_17 - (unsigned long)v) & (unsigned long)(
                                                      (int)v / -60)) & 31UL)) % (
        (p + (p_19 * p_19 - (long)(- p_21))) + 544L);
  v = (char)-59;
  result = ! ((long long)((long)((int)v - (int)((char)v_4)) / (v_6 / (
                                                               p + 418L) + 779L)) % (
              (long long)(~ p_9) * ((long long)p_11 & -841LL) + 478LL));
  return result;
}


