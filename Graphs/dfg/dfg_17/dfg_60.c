#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 323387707
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, double p_4, unsigned int p_6, double p_8,
              float p_13)
{
  float v_19;
  signed char v_17;
  double v_15;
  double v_11;
  unsigned long v;
  long long result;
  v_19 = p_13;
  v_17 = (signed char)p_6;
  v_15 = (double)p_6;
  result = 4672LL;
  v_11 = (double)((long)(-608.605836376 * p_8) / (long)(((int)v_17 * (
                                                         (int)((signed char)v_19) * -81)) % (
                                                        (int)v_17 + 77) + 789));
  v_15 = v_15;
  v = (unsigned long)((int)(- (- v_11) + (double)(0 / ((int)(551.799369077 - (double)p_13) + 356))) * ~ (
                      (int)((unsigned short)v_15) * 31817 & -63));
  result = (long long)((double)((long long)(! p) / ((long long)(- p_4) % (
                                                    (result + (long long)p_6) + 93LL) + 964LL)) * (
                       - (p_8 * p_8) + (double)v));
  return result;
}


