#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 211975983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, double p_11, signed char p_13)
{
  signed char v_15;
  unsigned short v_9;
  unsigned long long v_7;
  double v_4;
  float v;
  unsigned long result;
  v_15 = (signed char)p;
  v_9 = (unsigned short)62063;
  v_4 = -761.701384969;
  v = -4571428352.f;
  v_7 = (unsigned long long)(~ ((int)(! v_15) - (int)((signed char)((double)(
                                                                    -3079 / (
                                                                    (int)((short)v_4) + 886)) + v_4))));
  v_7 = (unsigned long long)((double)((unsigned long long)p_13 / (~ (
                                                                  (unsigned long long)v + v_7) + 47ULL)) - 
                             (-23755. * p_11 + (double)((unsigned long long)v_9 * 18446744073709496536ULL)) * 8.68668260313e+37);
  v = (float)(((unsigned long long)(((double)v - v_4) * (double)(- p)) + (
               - v_7 ^ 12049ULL)) * (unsigned long long)(- ((int)v_9 % (
                                                            (int)((unsigned short)p_11) + 603) + (int)p)));
  result = (unsigned long)v;
  return result;
}


