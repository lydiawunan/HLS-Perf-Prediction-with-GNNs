#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 949871957
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, double p_5, unsigned int p_7, short p_11, char p_13)
{
  unsigned long long v_17;
  unsigned int v_15;
  unsigned long v_9;
  unsigned long v;
  long long result;
  v_17 = 28641ULL;
  v_15 = (unsigned int)p;
  v_9 = (unsigned long)((unsigned long long)((long long)v_15 / (((long long)p_11 & 596976155LL) % -266411050LL + 80LL)) + 
                        119ULL / ((- v_17 - (unsigned long long)(82 / (
                                                                 (int)p_13 + 72))) + 705ULL));
  result = (long long)((unsigned int)(! (- (23 / ((int)p_13 + 372)))) * ~ (- (~ p_7)));
  v = (unsigned long)((result - (long long)((int)(- p) + 30 % ((int)p + 599))) + (long long)(
                      (unsigned long)(p_5 - (double)p_7) / (v_9 * (unsigned long)p_11 + 209UL) >> 31LL));
  result = ~ (- ((long long)(v % (unsigned long)((int)p + 730)) * -17953LL));
  return result;
}


