#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 189957464
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, char p_7, unsigned long long p_9,
                  unsigned long long p_11, long long p_19)
{
  unsigned short v_23;
  unsigned int v_21;
  unsigned short v_17;
  unsigned long v_15;
  float v_13;
  unsigned int v_5;
  float v;
  unsigned long result;
  v_23 = (unsigned short)26397;
  v_21 = (unsigned int)p_11;
  v_17 = (unsigned short)p_7;
  v_15 = (unsigned long)p_11;
  v_13 = (float)p_7;
  v_5 = p;
  v = (float)p_9;
  result = (unsigned long)p;
  v = (- v / ((float)(10203 / ((int)v_17 + 106)) + 693.f) - (float)(~ result * (unsigned long)(
                                                                    (unsigned int)v_17 / (
                                                                    v_5 + 866U)))) * (float)(
      ((long long)p_7 - ! p_19) / (long long)(4294947340UL / (unsigned long)(
                                              (v_21 + (unsigned int)v_23) + 106U) + 58UL));
  v_5 = (unsigned int)((unsigned long)v_13 + ~ v_15);
  v_5 = (unsigned int)(! ((unsigned long long)(((unsigned int)p_7 + v_5) * 40U) + 
                          (p_9 * p_11) / ((p_9 ^ 815970207ULL) + 463ULL)));
  result = (unsigned long)(((~ p * (4294950480U & p)) / ((unsigned int)(- (- v)) + 591U)) * v_5);
  return result;
}


