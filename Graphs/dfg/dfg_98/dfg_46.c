#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 238227942
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, signed char p_9, int p_11, signed char p_15,
                 double p_17)
{
  unsigned int v_19;
  long long v_13;
  unsigned long long v_7;
  unsigned int v_4;
  unsigned char v;
  unsigned int result;
  v_19 = 342869339U;
  v_13 = 704935465LL;
  v_4 = (unsigned int)p_11;
  result = 3578033712U;
  v = (unsigned char)((unsigned int)p_11 - (- (v_19 % (result + 445U)) + (unsigned int)(
                                            -121 % ((int)p + 667))));
  result = ! (! (~ v_4 + (unsigned int)(16641. / (p_17 + 556.))));
  v_7 = (unsigned long long)((long long)v_4 / (((long long)((int)p % (
                                                            p_11 + 391)) / (
                                                -46788LL % (v_13 + 964LL) + 72LL) - (long long)(! (
                                                (int)p_15 * (int)p))) + 982LL));
  result = ! (((unsigned int)v ^ result) - ! v_4) | (unsigned int)((int)(! (~ p)) >> (
                                                                   - (
                                                                   v_7 - (unsigned long long)p_9) & 7ULL));
  return result;
}


