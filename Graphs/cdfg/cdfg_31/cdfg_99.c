#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 63255679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, unsigned int p_7[4], unsigned int p_11,
        signed char p_13, unsigned int p_15)
{
  unsigned char v_19;
  double v_17;
  unsigned long long v_9;
  unsigned int v_5;
  double v;
  int result;
  v_19 = (unsigned char)132;
  v_17 = 771.248537082;
  v_9 = (unsigned long long)p_13;
  v_5 = 54384U;
  v = (double)p_7[2];
  result = 686257257;
  while (- p_11 + (p << (((int)p_13 | (int)p_13) & 31)) >= (unsigned int)(
                                                           - v_17 - 18336.) * ~ (
                                                           p_7[3] & 57653U)) {
    v_17 = (int)v_19 * 46338;
    v_19 = (unsigned char)(- ((unsigned long long)p_7[0] / 39885869ULL) / 2293ULL);
    v = (double)(p % 764U);
    v_17 = (double)(- (p_11 / ((unsigned int)v_17 + 277U)) | (unsigned int)(
                    (v_17 / ((double)p_15 + 144.)) * (double)((unsigned int)p_13 % (
                                                              p_15 + 680U))));
  }
  while_0_break: ;
  while (v - (double)((p << (v_5 & 31U)) & (unsigned int)(~ result)) == (double)(
         (unsigned long long)(~ (p + p_7[2])) - ~ (115207835ULL * (unsigned long long)p))) {
    v_5 = v_9 / 33719ULL;
    v_5 = (unsigned int)(- ((double)((unsigned int)2.09270897959e+37f / (
                                     p_15 + 1022U)) * (v_17 - (double)v_5)));
    result = (int)((unsigned long)((v_5 * (unsigned int)p_13) % (p_15 + 902U)) / (
                   ~ ((unsigned long)p_13 / 188530733UL) + 171UL));
    v_5 = (unsigned int)(18446744073702734461ULL - (unsigned long long)(
                         p_11 + (v_5 | p)));
  }
  while_0_break_0: ;
  return result;
}


