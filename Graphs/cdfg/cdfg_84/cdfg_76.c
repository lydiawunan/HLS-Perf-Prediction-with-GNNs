#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 558829593
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, double p_7, double p_9, unsigned char p_11, int p_13)
{
  unsigned int v_25;
  unsigned long long v_23;
  unsigned char v_21;
  double v_19;
  char v_17;
  long v_15;
  signed char v_5;
  unsigned long long v;
  short result;
  v_21 = (unsigned char)p_9;
  v_19 = p_7;
  v_17 = (char)p_11;
  v_5 = (signed char)-104;
  v = (unsigned long long)p;
  result = (short)p_13;
  if (3131370409.1 > ((double)(~ v_5) * - p_7) * (double)p_13) {
    v_15 = (long)(- (((int)p_11 % ((int)((unsigned char)7431010816.f) + 773)) / (
                     ((int)v_17 - 85) + 709)));
    v_5 = (signed char)((long long)p_13 / (((long long)p_9 & ((long long)v_15 & p)) + 755LL));
    v = (unsigned long long)(- (65330. * p_7) / ((p_9 + (double)p_11) * -9417775104. + 987.));
  }
  else {
    v_25 = (unsigned int)(-8963922944.f + (float)p_11);
    v_23 = (unsigned long long)(! (! v_25));
    v_5 = (signed char)(((unsigned long long)v_19 * ((unsigned long long)v_21 - v_23)) % (
                        (unsigned long long)((p_9 - (double)v) - (double)(
                                             (int)result * -12)) + 842ULL));
  }
  result = (short)(~ v / (unsigned long long)(- p + 513LL) & (unsigned long long)(
                   8313 % ((int)v_5 + 195) + (int)(- p_7)));
  return result;
}


