#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 640692958
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p[1], char p_5[1], unsigned long long p_13, long p_15)
{
  float v_19;
  short v_17;
  long v_11;
  short v_9;
  unsigned char v_7;
  unsigned long v;
  short result;
  v_17 = (short)-20275;
  v_11 = (long)p_5[0];
  v_7 = (unsigned char)p[0];
  v = (unsigned long)p_13;
  v_19 = (float)(~ (v_11 - (long)p_5[0]));
  v_9 = (short)(~ ((unsigned long long)(p[0] - (long long)v_17) / ((unsigned long long)(
                                                                   (float)(
                                                                   v * (unsigned long)p_5[0]) + v_19) + 2ULL)));
  v_11 = (long)((long long)v_7 / (- ((1038442246LL % (long long)((int)v_17 + 370)) % (long long)(
                                     (int)p_5[0] + 246)) + 524LL));
  result = (short)(- (p[0] - 383285635LL) / (long long)(~ v * (unsigned long)(
                                                        (int)p_5[0] + 2) + 668UL) << (
                   (unsigned long long)((int)v_7 % ((int)v_9 % -56706 + 833)) % (
                   (((unsigned long long)v_11 - p_13) - (unsigned long long)p_15) + 919ULL) & 63ULL));
  return result;
}


