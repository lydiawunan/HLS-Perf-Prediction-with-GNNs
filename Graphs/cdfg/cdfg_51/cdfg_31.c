#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 201440582
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, signed char p_4, long long p_6[1],
         unsigned int p_8, char p_10)
{
  signed char v_15;
  long v_13;
  long v;
  long result;
  v_15 = (signed char)p_8;
  v_13 = (long)p;
  v = (long)p_6[0];
  v = (long)((unsigned long)(v / -986398149L) + ((unsigned long)v_13 * (unsigned long)p_8 - (unsigned long)(
                                                 709736186L / (long)(
                                                 (int)v_15 + 279))));
  if ((unsigned long)(3862757554U % (unsigned int)((((int)p_10 - 17607) - 36) + 44)) >= (unsigned long)v) 
    result = (long)(p % (unsigned long long)(((long long)p_4 | p_6[0]) + 831LL));
  else result = (long)(-431491412UL);
  return result;
}


