#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 126949524
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, double p_4, unsigned long p_9, unsigned short p_11,
         unsigned long p_21)
{
  double v_23;
  char v_19;
  unsigned short v_17;
  short v_15;
  long v_13;
  unsigned short v_7;
  signed char v;
  long result;
  v_19 = (char)-52;
  v_17 = (unsigned short)50659;
  v_13 = (long)p;
  v_7 = (unsigned short)p_9;
  v = p;
  result = (long)p_9;
  v_23 = (double)(7ULL * ((unsigned long long)v * ((unsigned long long)p + 50685ULL)));
  v_15 = (short)((~ ((long long)v_7 & 49988LL) - (long long)(! v_13 * (long)(
                                                             30456 / (
                                                             (int)v_19 + 327)))) / (long long)(
                 - ((p_21 * (unsigned long)result) % ((unsigned long)(
                                                      v_23 + 211.) + 204UL)) + 361UL));
  v = (signed char)(! ((~ v_13 + (long)(29080 - (int)v_15)) - (long)(- (
                       (int)v_17 / ((int)v_7 + 263)))));
  result = (long)((long long)(! ((int)((signed char)-1.65244519433e+38) - (int)p) * (int)p_4) % (
                  ((long long)v - (-48841LL - (long long)v_7) % (long long)(
                                  (p_9 - (unsigned long)p_11) + 48UL)) + 878LL));
  return result;
}


