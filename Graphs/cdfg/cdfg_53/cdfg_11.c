#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 833657015
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, float p_5, long p_7[2][2][5],
          unsigned long long p_9, long p_13)
{
  long v_17;
  unsigned long v_15;
  signed char v_11;
  unsigned long v;
  float result;
  v_17 = -282590968L;
  v_15 = (unsigned long)p;
  v_11 = (signed char)-78;
  result = -7.98917268975e+37f;
  if (((unsigned long long)((unsigned long)p / 4294911583UL) * (p_9 >> (
                                                                (int)v_11 & 63))) % (unsigned long long)(
      p_13 + 833L) >= ((unsigned long long)v_15 - p_9 * (unsigned long long)v_17) * (unsigned long long)(- (
                      p_5 * (float)p_9))) {
    result = -25480.f - result;
    v = (unsigned long)((7348U | - p) % (p + 330U));
    result = (float)(- (- (-3117390946.81 * (double)result)));
  }
  else {
    result = (float)(((long long)(! p_7[0][0][2]) + -40165LL) + (long long)(! (~ p_7[1][0][4])));
    v = (unsigned long)p_5;
  }
  result = (float)0UL;
  return result;
}


