#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823061619
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, unsigned short p_11[4][3], double p_13,
                       float p_15, float p_21)
{
  unsigned int v_19;
  float v_17;
  unsigned short v_9;
  long long v_7;
  unsigned int v_4;
  int v;
  unsigned long long result;
  v_17 = 762.782714844f;
  v_9 = (unsigned short)p_21;
  v_4 = 912891793U;
  result = 18446744073248215429ULL;
  if (! (-104 % ((int)((char)p_15) + 749)) * (int)(- (7.12168743921e+37f / (
                                                      p_15 + 916.f))) != 
      63 << (- result & 7ULL)) {
    v_7 = (long long)(- ((unsigned long long)(- p_13) & ((unsigned long long)p_15 - result)));
    v_7 = - (- v_7) - (long long)p;
    v = (int)((unsigned long long)((v_7 - (long long)v_9) << (-83 / (
                                                              (int)p_11[3][0] + 379) & 63)) + result);
  }
  else {
    v_19 = 3557083195U - ((unsigned int)(- p_21) >> ((v_4 - 6668U) & 31U));
    v_4 = - v_19;
    v = (int)(- (- v_17 + (float)(~ p_11[0][0])));
  }
  result = (unsigned long long)(((long long)(- v) & 855132240LL) / (long long)(
                                (v_4 + (unsigned int)p) % (unsigned int)(
                                - v + 873) + 791U));
  return result;
}


