#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312268955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, unsigned char p_11, signed char p_13, char p_15,
              unsigned int p_21)
{
  unsigned int v_23;
  long v_19;
  unsigned int v_17;
  long v_9;
  long v_6;
  long v_4;
  long long v;
  long long result;
  v_23 = 102643748U;
  v_19 = (long)p_11;
  v_17 = 3845459377U;
  v_6 = -797050488L;
  v_4 = -15914L;
  v = 802784829LL;
  while (((unsigned long long)v_4 * 42745ULL) % (unsigned long long)(
         - p_21 / (unsigned int)((int)p_13 + 703) + 472U) != 18446744073709486440ULL) {
    v_17 = v_23 * 38549U;
    v_23 = (unsigned int)((((float)v_17 * p) / ((float)p_11 + 191.f)) / (
                          (float)((long)p_13 - v_4) + 210.f));
    v_6 = (long)((int)p_11 % (((int)(! p_11) | (196 >> ((int)p_11 & 7))) + 513));
    v_4 = (long)(! (((int)p_15 % 33590) * ((int)p_15 + (int)p_11)));
  }
  while_0_break: ;
  if ((unsigned long long)((unsigned long)v_17 ^ ((unsigned long)v_19 - (unsigned long)(
                                                  v_17 / 3639802436U))) == 
      (63218ULL % (unsigned long long)(p_21 + 185U) + (unsigned long long)p_21) % (unsigned long long)(
      (int)p_15 + 135)) {
    v = (long long)(~ v_4) | (long long)(v_6 * 217L) % (v * (long long)p + 981LL);
    result = ! (~ (- v));
    result = ! (~ (- result));
  }
  else {
    v_9 = (long)((-277267762LL * (long long)p_11) * (long long)((unsigned long)(
                                                                (unsigned int)p_13 & 3537164774U) * (unsigned long)(
                                                                -10584L >> (
                                                                (int)p_15 & 31))));
    v_9 = ! v_9;
    result = (long long)v_9;
  }
  return result;
}


