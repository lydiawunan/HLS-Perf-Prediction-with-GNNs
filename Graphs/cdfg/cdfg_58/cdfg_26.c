#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 120637189
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned short p_4, double p_9,
                       long p_13, int p_15)
{
  short v_21;
  unsigned int v_19;
  unsigned short v_17;
  double v_11;
  long long v_7;
  unsigned long v;
  unsigned long long result;
  v_21 = (short)11903;
  v_19 = (unsigned int)p_13;
  v_17 = p;
  v_11 = (double)p_15;
  v_7 = (long long)p_13;
  result = 33709ULL;
  if ((unsigned long long)((int)v_17 & 12303) > 63161ULL + (unsigned long long)(
                                                ~ p_15 * (int)(v_11 * 49098.))) {
    result = (result + (unsigned long long)p_15) / (unsigned long long)(
             (10844 - ((int)p_9 + p_15)) + 333);
    v = (unsigned long)(~ ((unsigned int)(252 * (int)p) % (((unsigned int)v_17 & v_19) + 757U)));
    v_11 = - (- (- 639.400701671));
  }
  else {
    v_7 = (long long)(- (69134517UL % (unsigned long)((int)v_21 + 292)) % (
                      (unsigned long)2.5921631386e+38f + 700UL));
    result = (unsigned long long)-7274171133.47;
    v = (unsigned long)(p_9 / 1.04087733917e+38);
  }
  while ((long long)v > - (~ (v_7 + (long long)p_9))) {
    v_17 = (int)((unsigned short)v_11) * 65029;
    v_7 = (long long)(~ (((int)v_17 + -13043) >> 20ULL));
    result = (unsigned long long)((double)(((unsigned long long)p_15 - result) % 5236587111ULL) - p_9);
    v = (unsigned long)(v_7 ^ ((v_7 - (long long)p_13) + ~ v_7));
  }
  while_0_break: ;
  return result;
}


