#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 530724385
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p[5], float p_9, double p_13, short p_17, long long p_19)
{
  int v_21;
  short v_15;
  unsigned long v_11;
  unsigned short v_7;
  long long v_5;
  long v;
  long long result;
  v_21 = 23889;
  v_7 = (unsigned short)p_9;
  v_5 = (long long)p[3];
  v = (long)p_13;
  result = (long long)p_17;
  v_15 = (short)((935477978UL / ((unsigned long)(p_9 * 253.f) + 415UL)) % (unsigned long)(
                 v_21 + 479));
  while ((long long)(- ((double)(v * (long)p[0]) + (p[0] + (double)v))) != 
         result / 4294964102LL) {
    v_11 = (unsigned long)((long long)((float)v_5 / (- p_9 + 207.f)) % (
                           (- result - (long long)p_17 / (p_19 + 357LL)) + 831LL));
    v_7 = (unsigned short)((double)((v_11 & (unsigned long)v) * (unsigned long)(
                                    (int)v_7 - 420584015)) / (((double)(
                                                               (long long)p[0] / (
                                                               v_5 + 72LL)) + 
                                                               p_13 * (double)v_15) + 335.));
    result = (long long)(- p_9);
  }
  while_0_break: ;
  return result;
}


