#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329599236
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, float p_7, short p_13)
{
  signed char v_11;
  signed char v_9;
  unsigned int v_5;
  unsigned long long v;
  double result;
  v_11 = (signed char)117;
  v_9 = (signed char)p;
  v_9 = (signed char)((int)v_11 * (int)v_9 - (int)p_13);
  v_5 = (unsigned int)((int)((signed char)9692089180.55) - (int)(! v_9));
  v = (unsigned long long)(- (-893746108809135000LL * ((long long)(135U % (
                                                                   v_5 + 915U)) + 
                                                       (long long)p_7 % -51745LL)));
  result = (double)((unsigned long long)p - v);
  return result;
}


