#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574084231
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, long p_5, int p_9, int p_13, unsigned long long p_15)
{
  int v_23;
  signed char v_21;
  double v_19;
  signed char v_17;
  long long v_11;
  long long v_7;
  unsigned char v;
  int result;
  v_23 = p_9;
  v_21 = (signed char)53;
  v_19 = -3.387946949e+37;
  v_17 = (signed char)p_9;
  v_11 = (long long)p;
  v_7 = -24935LL;
  v = (unsigned char)188;
  while ((unsigned long long)((long long)p_13 & (-22913398209800LL << (
                                                 (int)v_17 & 63))) == 
         (unsigned long long)(- (- v_19)) * ((unsigned long long)v_11 / (
                                             (p_15 & (unsigned long long)v_21) + 546ULL))) {
    v = (long)v_23 + 52741L;
    v_7 = (long long)((unsigned int)p << (- (3613169718U << (v_11 & 31LL)) & 31U));
    v_23 = (int)p_5;
    v_19 = (double)v_11;
  }
  while_0_break: ;
  if ((unsigned long long)v / ((unsigned long long)(~ p_13) * (p_15 - 4294936714ULL) + 166ULL) > (unsigned long long)v_17) {
    v = (unsigned char)(- p - (float)((int)(-803.660339498 * (double)p) * p_9));
    result = (int)(((long long)((int)v * (int)((unsigned char)p)) + 14054LL) * (
                   (long long)p_5 + v_7));
    result = ~ (- result);
  }
  else {
    v_11 = 47602LL;
    result = (int)v_11;
  }
  return result;
}


