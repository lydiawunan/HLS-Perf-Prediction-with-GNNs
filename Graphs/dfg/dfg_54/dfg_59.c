#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 182188822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p[4][3][4], unsigned long long p_4, unsigned int p_6,
         double p_9, unsigned int p_15)
{
  long long v_17;
  unsigned short v_13;
  long v_11;
  signed char v;
  long result;
  v_17 = -56210LL;
  v_13 = (unsigned short)p_6;
  v_11 = (long)p_15;
  result = (long)((long long)(! (~ p_15 + (unsigned int)(- v_13))) % (
                  (432445654LL + ((long long)p_15 + v_17)) + 982LL));
  v = (signed char)(v_11 & (long)v_13);
  result = (long)(! ((unsigned long)v - ((unsigned long)(result + (long)p_9) - 25845UL)));
  result = (long)((((double)(53100L % (result + 417L)) + p[2][0][3] / 38886.) - 0.) + (double)(
                  ((6.26615866914e+37f - (float)p_4) + -75.f) * (float)(
                  (unsigned long long)p_6 + p_4)));
  return result;
}


