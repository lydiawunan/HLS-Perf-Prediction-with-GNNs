#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 434510931
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned long p_7, unsigned char p_13, int p_15,
                  long long p_17)
{
  unsigned long v_25;
  double v_23;
  float v_21;
  float v_19;
  long long v_11;
  double v_9;
  unsigned long long v_5;
  long long v;
  unsigned long result;
  v_25 = p_7;
  v_23 = -1.40849223803e+38;
  v_21 = (float)p_17;
  v_19 = (float)p_7;
  v_11 = (long long)p_7;
  v_9 = (double)p_13;
  v_5 = (unsigned long long)p;
  v = (long long)p_15;
  while ((double)(v_21 - (float)(v - (long long)p_15)) * - (v_9 / 351.) <= - v_23) {
    v_23 = v_25 - 1453UL;
    v_5 = (unsigned long long)(- (43109. / (16267. * p + 774.)));
    v_19 = (float)v;
    v_9 = (double)p_13;
  }
  while_0_break: ;
  if (v_19 > (float)(- (- (223LL % (v_11 + 944LL))))) {
    result = (unsigned long)(- ((unsigned long long)(~ v) / (((unsigned long long)p - v_5) + 904ULL)));
    v = (long long)(- (result + 78UL)) / (v + 86LL);
    result = (unsigned long)(~ ((long long)(! result) * ~ v));
  }
  else {
    v_9 = (double)(! (178711694LL + p_17 % (v_11 + 469LL)));
    v_11 = (long long)(- (! ((int)p_13 % (p_15 + 779))));
    result = (unsigned long)(! ((long long)(! p_7) + ((long long)v_9 >> (
                                                      v_11 & 63LL))));
  }
  return result;
}


