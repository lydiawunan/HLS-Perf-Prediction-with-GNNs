#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 470056716
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, char p_11, int p_13[5], unsigned int p_19,
         short p_21)
{
  long long v_17;
  float v_15;
  signed char v_9;
  double v_7;
  unsigned int v_5;
  unsigned long v;
  long result;
  v_17 = -707523425LL;
  v_7 = (double)p;
  v_5 = (unsigned int)p_21;
  v = (unsigned long)p_21;
  v_15 = (float)((double)(- (! p_19) / ((v_5 + (unsigned int)v_7) / (
                                        (unsigned int)(-2432078875.36 + (double)p_21) + 960U) + 36U)) / (
                 - v_7 / ((double)(~ (v_17 * (long long)v)) + 169.) + 450.));
  v = (unsigned long)(- v_15 * (float)(-36144LL & ((long long)v / (v_17 + 586LL) + 
                                                   229LL * v_17)));
  v_9 = (signed char)(~ (~ ((int)p_11 * ~ p_13[4])));
  result = (long)((! ((long long)p * 771535809LL) - (long long)v) / (long long)(
                  ! (v_5 + (unsigned int)((int)((signed char)v_7) / (
                                          (int)v_9 + 259))) + 255U));
  return result;
}


