#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 283286959
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p, unsigned int p_7)
{
  unsigned long long v_19;
  long long v_17;
  signed char v_15;
  long v_13;
  signed char v_11;
  char v_9;
  char v_4;
  double v;
  double result;
  v_19 = 18446744073709540651ULL;
  v_17 = 11651LL;
  v_15 = (signed char)-126;
  v_13 = (long)p_7;
  v_11 = (signed char)p;
  v_9 = (char)p_7;
  v_4 = (char)p_7;
  v = -2.28072138948e+37;
  if ((double)p > (double)(((int)v_15 - (int)v_4) * ((int)v_4 + (int)((char)v))) / (
                  (double)((long long)v_13 + v_17) / 8.75150943464e+37 + 787.)) {
    v_11 = (signed char)(- (! (~ 3744LL)));
    result = (double)((unsigned long long)(- (v_17 + 4128920093LL)) - 
                      85ULL / ((3001ULL & (unsigned long long)v_17) + 900ULL));
    v_17 = (long long)((unsigned int)((int)v_9 % 12) + ((unsigned int)v_9 * 14173U) / 33205U);
  }
  else {
    result = (double)((long long)(! (- p_7)) / (((long long)(-2.33063565385e+38 - (double)v_4) + 
                                                 p / ((long long)1.13477982503e+38f + 472LL)) + 105LL));
    result = (0. - 31750. * v) + ((double)(-42672 % ((int)v_11 + 905)) - result);
    v_19 = (unsigned long long)(~ (-115 % ((int)v_9 + 230)));
  }
  if ((double)(18071374 + (int)v_11) / ((- result - (double)(~ v_13)) + 957.) != (double)(
      (long)((int)(- v_15) >> ((unsigned long long)v_17 / (v_19 + 788ULL) & 7ULL)) % -508457L)) {
    v_4 = (char)(! (~ p_7) / (unsigned int)((int)v_9 + 268));
    v = (double)((long long)((int)v_4 / 27239) + p);
    result = - v;
  }
  else result = (double)568627167LL;
  return result;
}


