#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 606851700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, double p_4, long long p_9, long long p_15, double p_17)
{
  long long v_19;
  short v_13;
  unsigned char v_11;
  int v_7;
  long long v;
  float result;
  v_19 = p_15;
  v_13 = (short)p;
  v_11 = (unsigned char)186;
  v = -31139LL;
  result = 1.37799532567e+38f;
  if (18446744073709551494ULL - ((unsigned long long)((double)v - p_4) + (
                                 (unsigned long long)v_19 & 722662433ULL)) >= (unsigned long long)(
      31926 % (- ((int)v_11 / -10423) + 240))) {
    v_11 = (unsigned char)(result + (float)(~ p_15 >> ((long long)((double)v_13 * p_17) & 63LL)));
    v_7 = (int)(((unsigned long long)v_13 + 192181900ULL) * (unsigned long long)(- (! p)));
    v = p_9 - (long long)v_11;
  }
  else {
    v_7 = (int)p;
    v_13 = (short)(2.91719504005e+38 * (-7967186278.32 + p_4) - 181.);
    v = (long long)(! v_13);
  }
  if ((long long)(- p_4) <= (v + 4265451976LL) / (! v * (long long)(484460455 / (
                                                                    v_7 + 657)) + 245LL)) 
    result = (float)461688458LL;
  else result = (float)p;
  return result;
}


