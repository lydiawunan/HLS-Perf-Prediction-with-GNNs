#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591283165
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, double p_5, double p_13, float p_15, float p_17[5])
{
  char v_21;
  unsigned long v_19;
  unsigned char v_11;
  double v_9;
  long v_7;
  int v;
  int result;
  v_21 = (char)-50;
  v_19 = 4294918954UL;
  v_11 = (unsigned char)p;
  v_9 = p_5;
  v = (int)p;
  if (- (- p_5) / (p_5 * (double)v_21 + 150.) <= (double)(((long long)v % 917LL) / (long long)(
                                                          (((int)((signed char)p_15) - 85) + (int)(
                                                           v_9 + (double)p_17[4])) + 724))) {
    v_11 = (unsigned char)((unsigned long)(- ((float)p / (p_17[3] + 796.f))) * (
                           v_19 / 4162101548UL));
    v_9 *= (double)(- (- p_15));
    v_7 = (long)(- ((unsigned long)v_9 + p) + (unsigned long)(! (4 / (
                                                                 (int)v_11 + 411))));
  }
  else {
    v_9 = (double)v_21;
    v_19 = 41947UL;
    v_7 = (long)((unsigned long)p_17[1] / ((3733886321UL + (unsigned long)v_9 / (
                                                           v_19 + 334UL)) + 232UL));
  }
  if (- ((unsigned long long)(- v_7) / (((unsigned long long)v - 509693294ULL) + 575ULL)) == (unsigned long long)(
      ((double)(! v_7) * - v_9) / ((double)((unsigned int)(! v_11) + 
                                            21817U % ((unsigned int)p_13 + 363U)) + 827.))) 
    result = (int)(! (968126701UL | p * 125UL));
  else {
    v = 34;
    result = (int)((unsigned long long)((unsigned int)(~ v) / 310340957U) | (
                   (unsigned long long)((int)((signed char)p_5) / -102) + 18446744073709538942ULL));
  }
  return result;
}


