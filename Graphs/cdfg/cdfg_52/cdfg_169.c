#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 22907857
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned long p_9, double p_17[4])
{
  unsigned long long v_15;
  int v_13;
  unsigned int v_11;
  double v_7;
  char v_5;
  int v;
  short result;
  v_15 = 47537ULL;
  v_13 = -471732033;
  v_7 = 2.0261628109e+38;
  v_5 = (char)p_17[0];
  result = (short)p;
  result = (short)((long long)((int)p * ((int)v_5 % -89)) ^ 618347582LL % (long long)(
                                                            (int)result / 232 + 984));
  if ((double)((unsigned long long)v_13 * v_15 >> ((int)result & 63)) <= p_17[3]) {
    v_5 = (char)-119;
    v = (int)((long)((int)(! v_5) + (int)p) / (((long)v_7 - 565982293L) % (long)(
                                               (int)(! p) + 677) + 206L));
    result = (short)((long long)p * ((long long)(! v) * 486563LL));
  }
  else {
    v_11 = (unsigned int)(! (signed char)64);
    v = (int)(((unsigned long long)(! p_9) ^ (unsigned long long)p % 18446744073709487734ULL) + (unsigned long long)(- v_11));
    result = (short)(31772 - ! (v + (int)p));
  }
  return result;
}


