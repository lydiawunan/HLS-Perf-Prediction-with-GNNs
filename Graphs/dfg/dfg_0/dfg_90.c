//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 477162290
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, int p_7, int p_11)
{
  unsigned long v_9;
  long long v_5;
  float v;
  int result;
  v_5 = 60739LL;
  v = (float)((unsigned int)(~ p_11) - 3269544676U);
  v_9 = (unsigned long)(- 2.94797288681e+38);
  v = (float)((((int)2499881504.66 - ((int)p - 177)) << (113LL % ((v_5 ^ (long long)p) + 777LL) & 31LL)) - (
              p_7 - (int)((double)((unsigned long)v % (v_9 + 451UL)) * (
                          (double)v_9 / 9729745597.98))));
  result = (int)v;
  return result;
}


