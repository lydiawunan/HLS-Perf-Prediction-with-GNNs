#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 703285004
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, short p_9, double p_11)
{
  unsigned short v_17;
  signed char v_15;
  long long v_13;
  unsigned long long v_7;
  unsigned long v_5;
  long long v;
  unsigned int result;
  v_17 = (unsigned short)55254;
  v_13 = -1060962719LL;
  v_7 = (unsigned long long)p_9;
  if (796616622 < (-20269 | (int)(- v_17))) {
    v_5 = (unsigned long)(3941259921ULL / (~ (v_7 * (unsigned long long)p_9) + 656ULL));
    result = (unsigned int)(321674773 - (int)p);
    v = (long long)v_5;
  }
  else {
    v = -18837LL;
    v_15 = (signed char)v_7;
    result = (unsigned int)((p_11 + p_11) / ((double)(- v_13 / (long long)(
                                                      (int)v_15 % ((int)p + 522) + 125)) + 948.));
  }
  result = (unsigned int)(~ ((v + (long long)result) + (long long)p));
  return result;
}


