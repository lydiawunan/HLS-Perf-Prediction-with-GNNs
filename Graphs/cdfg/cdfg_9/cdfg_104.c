#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 164568293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, int p_11)
{
  long v_23;
  long v_21;
  short v_19;
  short v_17;
  float v_15;
  unsigned char v_13;
  double v_9;
  unsigned long v_7;
  unsigned char v_4;
  short v;
  signed char result;
  v_23 = (long)p_11;
  v_21 = (long)p_11;
  v_19 = (short)22759;
  v_15 = 2.71591950599e+38f;
  v_13 = (unsigned char)p_11;
  v_7 = 3630172142UL;
  v_4 = (unsigned char)p;
  v = (short)p_11;
  if ((int)v <= ~ ((int)((float)v_19 + -3.14535612499e+38f) - (106 << (
                                                               p & 7UL)))) {
    v_17 = (short)((18446744073709491487ULL - (unsigned long long)(! p_11)) + (unsigned long long)(
                   1052519780L / (long)(((int)((short)v_15) - (int)v_19) + 736)));
    v_15 = (float)((long long)((p & 23022UL) % (! p + 1015UL)) - -52609LL * (long long)v_17);
    v_9 = (double)(- ((float)v_13 * v_15) + (float)(~ (-764030396LL << 50LL)));
  }
  else {
    v_4 = (unsigned char)(((unsigned long long)v_23 | 14232ULL) % 106ULL);
    v_9 = (double)v_21;
    v_7 = 776386292UL;
  }
  if (-50.8275413513f >= (float)((unsigned long long)(23. + - v_9) + (unsigned long long)(
                                 39567 * p_11))) result = (signed char)(~ 0);
  else {
    result = (signed char)(v_7 + 4294952346UL);
    v = (short)((double)(21839UL + p / 4283701149UL) - 2.43676338007e+38);
    result = (signed char)((long long)(~ (~ result)) - -61847LL * (long long)(
                                                       (int)v % ((int)v_4 + 13)));
  }
  return result;
}


