#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 161913458
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, long p_7[3][4][2], unsigned long long p_9,
              unsigned long long p_15, float p_17)
{
  unsigned int v_19;
  double v_13;
  unsigned char v_11;
  float v_4;
  unsigned long long v;
  long long result;
  v_19 = 13298U;
  v_13 = p;
  v_11 = (unsigned char)p_17;
  result = (long long)p_9;
  v_11 = (unsigned char)((874ULL / (- p_15 + 778ULL) + (unsigned long long)(
                          (result & (long long)v_11) + (-422820959LL & (long long)p_17))) % (unsigned long long)(
                         ((unsigned int)(-402.280334473f + (float)p_15) - (
                          0U - v_19)) + 923U));
  v_4 = (float)(- (-657.900102748 - v_13));
  v = (unsigned long long)(~ result);
  result = (long long)((int)(((double)result / ((-808158416.386 - (double)v) + 289.)) * (
                             ((double)v_4 + p) * (double)p_7[1][1][0])) & (
                       (int)((unsigned char)((double)p_9 + 6288027558.32)) - (int)(~ v_11)));
  return result;
}


