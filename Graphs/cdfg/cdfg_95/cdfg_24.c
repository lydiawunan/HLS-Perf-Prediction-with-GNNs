#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347319235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, short p_11, double p_15, char p_21)
{
  unsigned long v_19;
  unsigned int v_17;
  int v_13;
  unsigned long v_9;
  long v_7;
  char v_5;
  long v;
  long result;
  v_19 = 3546154364UL;
  v_17 = 3319373741U;
  v_13 = (int)p;
  v_9 = 420330274UL;
  v_5 = (char)23;
  v = (long)p;
  if ((((unsigned long long)v_17 / (p + 425ULL) ^ 0) | (unsigned long long)(- (
       v_19 + (unsigned long)p_21))) >= (unsigned long long)((unsigned long)v_13 / (
                                                             v_9 * 272511926UL + 310UL))) {
    v_7 = (long)v_13;
    v = v_7 - (long)p_11;
    result = (long)(v_9 ^ (unsigned long)((-1.8026601075e+38 + (double)v_5) + (double)(
                                          p + 4294965202ULL)));
  }
  else {
    v_9 = (unsigned long)(! (18446744073709551529ULL / (p + 95ULL)) / 213992949ULL);
    v_7 = (long)((double)(0UL / (v_9 * 4063827559UL + 843UL)) * - p_15);
    result = (long)p;
  }
  while (- p > (unsigned long long)result) {
    result = v_7 / 234L;
    v_7 = (long)((unsigned long long)p_11 / (p + 490ULL));
    v_9 = (unsigned long)(((unsigned long long)(result + 46076L) - ((unsigned long long)-258.461639404f - p)) % (unsigned long long)(
                          ! v / (v_7 + 1019L) + 767L));
    result = (long)(((p + 55703ULL) & (29149ULL + (unsigned long long)v_9)) - (unsigned long long)v_5);
  }
  while_0_break: ;
  return result;
}


