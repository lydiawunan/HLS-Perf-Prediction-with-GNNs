#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 579340601
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, char p_5, long long p_7, double p_13, long p_15)
{
  unsigned long v_19;
  unsigned long v_17;
  char v_11;
  float v_9;
  int v;
  short result;
  v_19 = (unsigned long)p_5;
  v_17 = 4294942496UL;
  v_9 = 73.447845459f;
  result = (short)p_15;
  v_11 = (char)(~ ((unsigned long long)(v_19 / (v_17 + 430UL)) / (((18446744072967871805ULL + (unsigned long long)p) >> (
                                                                   (unsigned long long)(
                                                                   (double)result * -2.72301627489e+38) & 63ULL)) + 837ULL)));
  v_11 = (char)(- ((float)((46069LL + (long long)p_5) - (long long)((unsigned long)v_11 | v_17)) * 629585728.f));
  v = (int)(((long long)p % (((long long)((int)p_5 ^ 12207) | - p_7) + 597LL)) % (
            (((long long)p * 38068LL) * (long long)((int)((char)v_9) - (int)v_11) - (long long)(
             (int)((signed char)(p_13 / ((double)p_15 + 559.))) % -11)) + 864LL));
  result = (short)((long long)v | (long long)(! (-8266 / (v + 580))) / (
                                  (-4529LL % (long long)(p + 282) & -8624LL) + 626LL));
  return result;
}


