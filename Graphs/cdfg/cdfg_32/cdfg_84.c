#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 467779000
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, unsigned int p_4, signed char p_7, short p_15,
                  short p_21)
{
  unsigned long long v_23;
  int v_19;
  char v_17;
  long long v_13;
  char v_11;
  signed char v_9;
  long v;
  unsigned long result;
  v_19 = (int)p_15;
  v_17 = (char)-90;
  result = 400215150UL;
  if ((double)((unsigned long)p - result) > (- p + 4294941030.) - (double)(- p_15)) {
    v_13 = (long long)v_19;
    v_11 = (char)((unsigned long)(~ ((int)p_15 / ((int)v_17 + 146))) * (
                  result % 3915288302UL));
    v_9 = (signed char)(~ ((long long)v_11 / ((-538039922LL & v_13) + 1021LL)));
  }
  else {
    v_23 = (unsigned long long)p_4;
    result = (unsigned long)((unsigned long long)(p_4 ^ (unsigned int)(
                                                  (int)p_7 / ((int)p_21 + 26))) - - (
                             (unsigned long long)v_19 | v_23));
    v_9 = (signed char)(((double)(2814370816.f / ((float)p_21 + 343.f)) * (
                         (double)result + p)) / ((double)p_7 + 965.));
  }
  if (-583831045LL == (long long)(! v_9)) result = 19UL;
  else {
    v = (long)(- (- -943777408.f));
    result = (unsigned long)(((long)(p - (double)p_4) + v) - (long)(~ (~ p_7)));
  }
  return result;
}


