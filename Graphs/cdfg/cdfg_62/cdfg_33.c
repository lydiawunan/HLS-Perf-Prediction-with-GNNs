#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180280397
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, short p_5, double p_9, char p_11, unsigned int p_17)
{
  long long v_23;
  unsigned long v_21;
  unsigned short v_19;
  double v_15;
  signed char v_13;
  unsigned short v_7;
  long v;
  long result;
  v_23 = (long long)p_5;
  v_21 = (unsigned long)p_17;
  v_19 = (unsigned short)p_17;
  v_15 = p_9;
  v_13 = (signed char)-36;
  v_7 = (unsigned short)p;
  v = (long)p_17;
  result = (long)p_17;
  if ((int)v_19 != 0) {
    v_15 = (double)(- ((int)p | (int)v_13)) / (((p_9 + 323233358.) + (double)result) + 145.);
    v_7 = (unsigned short)(~ v_21 % (unsigned long)((4294962834U * (unsigned int)p_11 >> 7U) + 142U));
    result = (long)((((double)v + p_9) + (double)v_13) * (double)v_19);
  }
  else {
    v = (long)(- (- (54. * v_15)));
    v_15 = (double)(v_23 / -4164408431LL);
    v_13 = (signed char)(- (-3457513216.f - (float)((int)v_7 % 222)));
  }
  while ((v - ~ v) % (long)(((int)p + (int)p_5) + 966) < (long)((int)(
                                                                ((double)v_7 + p_9) - -75.1766738892) + (
                                                                (int)p_11 + (
                                                                20414 - (int)v_13)))) {
    v = v_15 * 4175414221.;
    v_13 = (signed char)(~ v + -331L);
    v_15 = (double)(4294966254UL % (unsigned long)(~ ((unsigned int)v_13 * p_17) + 551U));
    v_13 = (signed char)(- (- p_5));
  }
  while_0_break: ;
  return result;
}


