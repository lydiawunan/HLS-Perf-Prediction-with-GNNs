#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 133762829
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, unsigned short p_5[3][1], unsigned short p_17)
{
  long long v_19;
  unsigned int v_15;
  unsigned short v_13;
  long long v_11;
  unsigned char v_9;
  double v_7;
  double v;
  int result;
  v_15 = 743448398U;
  v_13 = p_5[1][0];
  v_11 = -43434LL;
  v_9 = (unsigned char)p_5[2][0];
  v_7 = -832.854387068;
  v = -66.6078052306;
  result = (int)p;
  while ((long long)(- result) <= - (v_11 / (long long)((int)v_13 + 371)) % -40LL) {
    v_19 = (long long)v_15 * -14994LL;
    v_9 = (unsigned char)((v / ((double)v_13 + 550.) - (double)(214 % (
                                                                (int)p_17 + 623))) - (double)(
                          p + (unsigned long long)(v_19 / -15LL)));
    v = (double)p_17;
    result = (int)p;
  }
  while_0_break: ;
  if ((unsigned long long)(3969587309. - ((double)p_5[1][0] * v_7) * -1.63284836588e+38) >= ! (
      (18446744073503811910ULL - p) % (unsigned long long)((int)v_9 % (
                                                           (int)((unsigned char)-435.032745361f) + 880) + 898))) {
    v = (double)(3418235271U * (unsigned int)(- (- v)));
    result = (int)v;
    result = (int)((unsigned long long)(- (- result)) % ((152ULL | ~ p) + 213ULL));
  }
  else result = 1039552419;
  return result;
}


