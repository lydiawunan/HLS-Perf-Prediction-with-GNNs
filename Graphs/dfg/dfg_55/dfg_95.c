#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1007359511
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, float p_5, float p_7, long long p_9,
                  unsigned long long p_13)
{
  double v_23;
  unsigned short v_21;
  long v_19;
  unsigned short v_17;
  unsigned long long v_15;
  unsigned char v_11;
  unsigned short v;
  unsigned char result;
  v_23 = (double)p_7;
  v_21 = (unsigned short)p;
  v_19 = (long)p_13;
  v_17 = (unsigned short)p_9;
  v_15 = 18446744073709513616ULL;
  v = (unsigned short)p;
  v_21 = (unsigned short)(((int)v_21 - (int)((unsigned short)(p_7 / (
                                                              p_7 + 294.f) + - p_7))) % (
                          (int)(- (v_23 * (double)p_7) / ((double)v_15 + 294.)) + 1022));
  result = (unsigned char)(((v_15 | (unsigned long long)p_7) / ((unsigned long long)(
                                                                p_5 * (float)v_17) + 146ULL) - v_15) * (unsigned long long)(
                           (long long)((-457116592L % (v_19 + 296L)) / -29123L) / (
                           (-14626LL % (p_9 + 646LL) << ((int)(! v_21) & 63)) + 488LL)));
  v_11 = (unsigned char)(! (! (p_13 / (unsigned long long)((int)p + 964)) % (unsigned long long)(
                            (10L - (long)(-5 / ((int)result + 861))) + 986L)));
  result = (unsigned char)((103338ULL ^ (unsigned long long)(~ ((int)v - (int)p))) & 
                           (unsigned long long)((long long)(- p_5) / (
                                                (long long)p_7 % (p_9 + 1005LL) + 101LL)) * (
                           (unsigned long long)((int)v_11 - (int)((unsigned char)584.864111072)) - (
                           p_13 << 49)));
  return result;
}


