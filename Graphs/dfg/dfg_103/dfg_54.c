#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 289386642
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, unsigned char p_9, float p_11, int p_15,
           long long p_19)
{
  unsigned long v_21;
  int v_17;
  signed char v_13;
  unsigned long v_7;
  unsigned long long v_4;
  unsigned int v;
  double result;
  v_21 = 483778492UL;
  v_13 = (signed char)p_11;
  v_7 = (unsigned long)p_11;
  v = 4294931146U;
  v_17 = (int)(! v_21 / ((unsigned long)(((float)p_19 * p_11 + (float)(~ p_15)) + 
                                         (float)(v_21 + v_21) / (- p_11 + 19.f)) + 94UL));
  v_4 = (unsigned long long)((float)(- ((int)((signed char)p_11) - (int)v_13) + 
                                     ((int)((signed char)-1159423307.09) | (int)v_13) % (
                                     p_15 * v_17 + 228)) - ((((float)p_19 + -5613787648.f) + (float)v_7) + 
                                                            (p_11 + 17770.f) * (float)v_21));
  result = (double)((unsigned long long)(107U | v) / (v_4 + 210ULL) - (
                    ((unsigned long long)(! v) | (p + (unsigned long long)v)) & (unsigned long long)(
                    v_7 - (unsigned long)(-31 ^ (int)p_9))));
  result = - result;
  return result;
}


