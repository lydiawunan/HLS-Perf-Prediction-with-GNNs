//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 286928265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long p[3][1], double p_5, double p_9,
              unsigned short p_15[5], unsigned char p_17)
{
  signed char v_13;
  unsigned int v_11;
  unsigned long long v_7;
  unsigned char v;
  long long result;
  v_13 = (signed char)p_17;
  v_11 = (unsigned int)p[1][0];
  v_7 = 18446744073709537456ULL;
  v_7 = (unsigned long long)(1 / ((int)((unsigned char)((p_9 - 20468.) / (
                                                        (double)v_11 + 521.))) + 302) - (int)(
                             - (- p_9) - (double)((unsigned long long)v_13 / (
                                                  v_7 + 150ULL) + (unsigned long long)(
                                                  (int)p_15[2] * (int)p_17))));
  result = (long long)((18446744072982807185ULL - (4294952186ULL | ! v_7)) + 18446744073709520027ULL);
  v = (unsigned char)((unsigned long long)(! (! p[0][0]) & (unsigned long)(
                                           (double)(result * (long long)p[1][0]) / (
                                           p_5 + 362.))) * ~ (0 / (unsigned long long)(
                                                              ~ result + 943LL)));
  result = (long long)(! v);
  return result;
}


