#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574100911
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, long long p_5, float p_7, int p_11,
          unsigned long long p_13)
{
  long long v_25;
  unsigned int v_23;
  unsigned int v_21;
  unsigned long v_19;
  double v_17;
  unsigned long long v_15;
  unsigned long long v_9;
  double v;
  float result;
  v_25 = (long long)p_11;
  v_23 = 172260378U;
  v_21 = 536579961U;
  v_19 = 4294925043UL;
  v = -396029356.03;
  if (-549LL != (long long)(68U + v_23) % ((long long)v / (v_25 + 997LL) + 293LL) + (long long)(
                p_11 - (int)(p_7 * 42.f))) {
    v_17 = p;
    v_9 = (unsigned long long)(! p_5);
    v_15 = (unsigned long long)p_7;
  }
  else {
    v_17 = v * -3.33683584309e+37;
    v_9 = (unsigned long long)(! ((unsigned long)((float)v_19 * p_7) - (
                                  (unsigned long)v_21 & 4294950486UL)));
    v_15 = (unsigned long long)(~ (- p_5)) % (! p_13 + 778ULL);
  }
  if ((double)(70 & (int)((char)(((double)p_5 - v_17) + (70. + p)))) != v_17) 
    result = (float)(- p);
  else {
    v = (double)((v_9 % (unsigned long long)(p_11 + 238)) * p_13 + 0ULL / (
                                                                   (unsigned long long)p_11 % (
                                                                   v_15 + 327ULL) + 491ULL));
    v = - ((double)p_7 / (v + 745.));
    result = (float)((long long)(- p * (v - -10508.)) & p_5);
  }
  return result;
}


