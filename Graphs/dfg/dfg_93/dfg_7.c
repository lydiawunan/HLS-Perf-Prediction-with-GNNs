#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 717661121
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, double p_4, int p_7, unsigned short p_9, float p_11)
{
  unsigned long long v_19;
  unsigned char v_17;
  short v_15;
  unsigned char v_13;
  unsigned long long v;
  long long result;
  v_19 = 18446744073709513851ULL;
  v_17 = (unsigned char)p_9;
  v_13 = (unsigned char)p_9;
  v = (unsigned long long)p_7;
  result = (long long)p;
  v_15 = (short)(- ((unsigned long long)(~ v_17) / (v_19 + 679ULL)));
  v_13 = (unsigned char)((! ((long long)v_17 - result) - (long long)(
                          (long)p_11 + ((long)p_4 & p))) + (long long)(! (
                         (int)v_13 & 54962)));
  v = (unsigned long long)(((unsigned long)(- (p_11 / (p_11 + 241.f))) + ! (
                            (unsigned long)p + 4294908691UL)) >> (((v / (unsigned long long)(
                                                                    (int)v_13 + 729)) % (unsigned long long)(
                                                                   (p_7 - (int)v_15) + 630)) / (
                                                                  (unsigned long long)(
                                                                  (p_4 * (double)v_17) * (double)(
                                                                  (long)p_7 * p)) + 104ULL) & 31ULL));
  result = (long long)(((unsigned long long)(-92L / (p + 737L) + (long)(- p_4)) % (
                        (v ^ v) / (unsigned long long)(p % (long)(p_7 + 972) + 576L) + 524ULL)) % (unsigned long long)(
                       (int)(- p_9) / ((840483378 - (int)((double)p_11 + p_4)) + 395) + 776));
  return result;
}


