#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 603446183
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, int p_4, long long p_13, float p_15,
                       unsigned long long p_17)
{
  unsigned short v_25;
  short v_23;
  unsigned long v_21;
  double v_19;
  unsigned int v_11;
  double v_9;
  long long v_7;
  unsigned char v;
  unsigned long long result;
  v_25 = (unsigned short)43225;
  v_23 = (short)p_15;
  v_21 = (unsigned long)p_13;
  v_19 = (double)p_15;
  v_11 = (unsigned int)p_15;
  v_9 = (double)p_15;
  v_7 = (long long)p_4;
  v = (unsigned char)p_13;
  if (((unsigned long long)((int)v_23 % ((int)((short)8.0618988188e+37f) + 899)) * 11319ULL) * (unsigned long long)v_25 > (unsigned long long)p) {
    result = (unsigned long long)(! (~ (v_7 | (long long)v_9)));
    v_9 = (double)((unsigned int)(~ (p_4 % ((int)v_19 + 334))) / ((unsigned int)(
                                                                  (int)((signed char)p_15) % 20) * (
                                                                  (unsigned int)p + v_11) + 112U));
    v_9 = (double)(- (((unsigned long long)v_7 - p_17) + (unsigned long long)(
                      (int)v_9 + p_4)));
  }
  else {
    result = 14493ULL;
    v_7 = (long long)v_21;
    v = (unsigned char)(! (result - (unsigned long long)v_7) | 18446744072659478347ULL);
  }
  while ((unsigned long long)(! (~ p)) - result > (unsigned long long)(~ p_4)) {
    v = v_9 / ((double)(v_7 - (long long)((unsigned long)v - 502438298UL)) + 955.);
    v_7 = (long long)(14205833 + (int)((char)(p_15 * (float)p_13)));
    v_11 = (unsigned int)((float)(~ (p_13 % (long long)(p_4 + 1019))) * -2.23885747115e-37f);
    result = (unsigned long long)(v_7 * (long long)(~ ((unsigned int)p_4 | v_11)));
  }
  while_0_break: ;
  return result;
}


