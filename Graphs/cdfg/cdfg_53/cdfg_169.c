#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 331960154
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, double p_4, unsigned int p_7, float p_9, int p_17)
{
  long v_21;
  int v_19;
  short v_15;
  unsigned long long v_13;
  long v_11;
  unsigned long long v;
  int result;
  v_21 = (long)p_7;
  v_19 = (int)p_7;
  v_13 = (unsigned long long)p_17;
  v_11 = 120078975L;
  v = 37728ULL;
  result = (int)p_7;
  while (4294906305ULL < (unsigned long long)(- (- p_9)) * ((unsigned long long)(
                                                            (unsigned long)p_7 * 448617221UL) + (
                                                            v + v_13))) {
    v = (long long)v_19 & -18064LL;
    v_11 = (long)(309.080749512f - (float)(! (- v)));
    v_19 = (int)(((double)(18446744073709517769ULL * (unsigned long long)v_21) / (
                  p_4 + 155.)) / ((double)(~ ((int)((unsigned short)p_9) * 36862)) + 655.));
    v = (unsigned long long)((long)((int)p & (int)(~ p)) / (- (v_11 & v_11) + 254L));
  }
  while_0_break: ;
  while ((unsigned long long)((double)(- p) * p_4) / ((v + (unsigned long long)(
                                                       p_7 / (unsigned int)(
                                                       result + 505))) + 500ULL) >= 
         ((unsigned long long)p_7 + ~ v) % ((unsigned long long)(p_9 + (float)(
                                                                 v_11 + 88L)) + 53ULL)) {
    v_15 = v_13 * 36125ULL;
    result = (int)p_9;
    v = (unsigned long long)(! p_17 - (int)(- (p_4 + p_4)));
    v_11 = (long)v_15;
  }
  while_0_break_0: ;
  return result;
}


